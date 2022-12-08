#include<iostream>
using namespace std;

//using a public class to define a node
class Node{
public:
    int data;
    Node* next;
};

//printing a list
void printList(Node* n){    //defining the head node from the list to be printed
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

//creating a linked-list
int main(){
    //initializing empty nodes
    Node* head=NULL;
    Node* first=NULL;
    Node* second=NULL;
    Node* third=NULL;
    Node* fourth=NULL;

    //allocating nodes
    head=new Node();
    first=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();

    //adding values to these nodes and linking them to form a linked list
    head->data=23;
    head->next=second;
    second->data=32;
    second->next=third;
    third->data=234;
    third->next=fourth;
    fourth->data=324;
    fourth->next=NULL;

    //printing the linked list by calling the printList function which we created
    printList(head);    //we only need to enter the first value of the linked list in order to print the list
}