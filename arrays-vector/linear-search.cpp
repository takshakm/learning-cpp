//searching for an element in an array
#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int key;
    cout<<"enter a key ";
    cin>>key;
    int arr[10]={1,2,3,4,56,7,-11,6,5,-33};
    bool ans=search(arr,10,key);
    if(ans){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is not present "<<endl;
    }
}