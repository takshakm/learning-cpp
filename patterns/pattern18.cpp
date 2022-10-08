/*
E 
D E
C D E
B C D E
A B C D E
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
        char ch='A'+n-i;
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