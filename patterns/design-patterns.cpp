#include<iostream>
using namespace std;
int main(){

    /*simple program to print * as per the input
    ***
    ***
    ***
    */
    int n;
    cout<<"enter a number ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            ++j;
        }
        cout<<endl;
        ++i;
    }

}