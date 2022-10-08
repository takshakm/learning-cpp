/*
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
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
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        ++i;
    }
    return 0;
}