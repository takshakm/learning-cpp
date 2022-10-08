/*
A B C 
D E F
G H I
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    int count=1;
    i=1;
    cout<<"enter a number ";
    cin>>n;
    while(i<=n){
        int j=1;
        char ch='A'+count-1;
        while(j<=n){
        cout<<ch<<" ";    
        j++;
        ch++;
        count++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}