//a simple program on reversing an array
#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={123,32,52,6,-11,-432};
    int brr[5]={2,23,5,12,-32};

    int orignalarr=printarray(arr,6);
    cout<<endl;
    int orignalbrr=printarray(brr,5);
    cout<<endl;
    
    
    reverse(arr,6);
    reverse(brr,5);


    int reversedarr=printarray(arr,6);
    cout<<endl;
    int reversedbrr=printarray(brr,5);
}   