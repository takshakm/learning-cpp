/*
   *
  **
 ***
****
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
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}