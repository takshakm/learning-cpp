/*
4
43
432
4321
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
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}