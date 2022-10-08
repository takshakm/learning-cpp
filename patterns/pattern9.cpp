/*
5
44
333
2222
11111
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
        while(j<=i){
            cout<<n-i+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}