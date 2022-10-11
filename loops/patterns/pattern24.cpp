/*
1234
 123
  12
   1
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
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        while(j<=n-i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}