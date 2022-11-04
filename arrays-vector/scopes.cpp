//updating value of an array
#include<iostream>
using namespace std;
//defining update function
void update(int nums[]){
    nums[4]=342;
    nums[1]=324;
    for(int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int nums[5]={4,3,6,2};
    //printing the array nums
    for(int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    update(nums);
}