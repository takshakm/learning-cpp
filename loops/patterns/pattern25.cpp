/*
   1
  23
 456
78910
*/
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter a number ";
    cin>>n;
    int count =1;
    i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            --space;
        }
        int j=1;
        while(j<=i){
            cout<<count;
            j++;
            count++;
        }   
        cout<<endl;
        i++;
    }
    return 0;
}