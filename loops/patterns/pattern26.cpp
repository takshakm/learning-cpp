/*
    1 
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5 
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number ";
    cin>>n;
    i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            --space;
        }
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }   
        cout<<endl;
        i++;
    }
    return 0;
}