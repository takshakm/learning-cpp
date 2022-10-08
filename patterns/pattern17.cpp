/*
A 
B C
D E F
G H I J
K L M N O
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
        char ch='A'+i-1;
        while(j<=i){
        cout<<ch<<" ";    
        j++;
        ch++;
        
        }
    cout<<endl;
    i++;
    }
    return 0;
}