/*
A B C 
A B C
A B C
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    
    i=1;
    cout<<"enter a number ";
    cin>>n;
    while(i<=n){
        int j=1;
        char ch='A'+j-1;
        while(j<=n){
        cout<<ch<<" ";
        ch++;
        
        j++;
        }
    cout<<endl;
    i++;
    
    }
    return 0;
}