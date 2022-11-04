//find the simple sum of the elements of an array, suppose there are any 5
#include<iostream>
int sumarray(int arr[], int size){
    int sum=0;
    //printing sum
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
using namespace std;
int main(){
    int arr[5]={32,1,2,5,2};
    cout<<"total sum of array is "<<sumarray(arr,5);
}