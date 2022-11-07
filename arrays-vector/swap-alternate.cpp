//swapping alternate elements in an array.
#include<iostream>
using namespace std;
void swapping(int arr[],int size){
    int start=0;
    int end=start+1;
    while(start<size&&end<size){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={3,2,6,4,8};
    cout<<"orignal array"<<endl;
    print(arr,5);
    cout<<endl;
    swapping(arr,5);
    print(arr,5);
    cout<<endl;
    return 0;
}