#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int a=0;
    for(int i=1; i<=n; i++){
        a=a+i;
        cout<<a<<endl;
    }
    return 0;
}