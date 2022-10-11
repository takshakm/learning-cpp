/*
1 2 3 
4 5 6 
7 8 9 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count<<" ";
            ++count;
            ++col;
        }
        cout<<endl;
        ++row;
    }
    return 0;
}

//completed