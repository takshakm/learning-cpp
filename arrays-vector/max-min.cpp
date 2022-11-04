//a simple but important program to tell the min/max number in an array.
#include<iostream>
#include<climits>
using namespace std;
int getMax(int num[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    //returning value
    return max;
}

int getMin(int num[], int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    //returning value
    return min;
}

//a much simpler way to find max & min with pre defined functions in cpp.
int newMax(int num[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
    }
    return maxi;
}

int newMin(int num[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    return mini;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    //taking input
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum "<<getMax(num,size)<<endl;
    cout<<"Minimum "<<getMin(num,size)<<endl;
    return 0;
}