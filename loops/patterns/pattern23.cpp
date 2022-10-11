/*
    1
   22
  333
 4444
55555
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
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}