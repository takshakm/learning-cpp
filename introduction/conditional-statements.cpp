//a simple program which states if a number is +ve, -ve or zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    if(n>0){
        cout<<n<<" is +ve"<<endl;
    }
    else if(n<0){
        cout<<n<<" is -ve"<<endl;
    }
    else if(n==0){
        cout<<n<<" is zero"<<endl;
    }
    return 0;

}