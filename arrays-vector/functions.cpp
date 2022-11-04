//basics of functions and it's syntax
#include<iostream>
#include<cmath>
using namespace std;
void printArray(int arr[], int SIZE){
    cout<<"printing an array"<<endl;
    for(int i=0; i<SIZE; i++){
       cout<<arr[i]<<" ";
   }
}
int main(){
    int simplearray[11]={5,4,2,7};
    printArray(simplearray,3);
    cout<<endl;
    int simplearraysize=sizeof(simplearray)/sizeof(int);
    cout<<simplearraysize<<endl;

    //array of char
    char alp[6]={'a','b','c','h'};
    for(int j=0;j<6;j++){
        cout<<alp[j]<<" ";
    }
    cout<<alp;
}
