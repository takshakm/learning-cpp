#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number ";
    cin>>x;
    int rev=0,rem;
        while(x!=0){
            rem=x%10;
            rev=rev*10+rem;
            x/=10;  
        }
        cout<<rev;
        if(rev=x){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
       
}