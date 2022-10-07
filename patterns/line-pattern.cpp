#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    i=1;
    cout<<"enter the number of lines ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        ++i;
    }
}