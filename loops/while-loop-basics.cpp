//program which prints num from 1 to n
#include<iostream>
using namespace std;
int main(){
    int n,a;
    a=0;
    cout<<"enter a number ";
    cin>>n;
    cout<<endl;

    while (a<=n)
    {
        cout<<a<<endl;
        ++a;
    }

    //sum from 1 to num
    int num,sum,i;
    sum=0;
    i=0;
    cout<<"enter a number ";
    cin>>num;
    cout<<endl;
    while(i<=num){
        sum=sum+i;
        ++i;
    }
    cout<<sum<<endl;

    //factorial of a number num1
    int num1,fact,j;
    j=1;
    fact=1;
    cout<<"enter a number ";
    cin>>num1;
    cout<<endl;
    while(j<=num1){
        fact=fact*j;
        ++j;
    }
    cout<<fact<<endl;
    
    return 0;
}
/*
read num
declare num, fact, j
let j=1
let fact=1
while j<=num
++j
fact=fact*j
*/