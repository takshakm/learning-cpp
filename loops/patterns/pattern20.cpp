/*
*****
****
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int n, i;
    i=1;
    cout<<"enter a number ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<"*";
            j++;

        }
        cout<<endl;
        ++i;
    }
    return 0;
}