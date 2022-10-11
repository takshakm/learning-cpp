/*
A B C 
B C D
C D E
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
        while(j<=n){
        cout<<ch<<" ";    
        j++;
        ch++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}