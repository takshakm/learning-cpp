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

    //sum of all even numbers till n
    int num2,sum1,k;
    sum1=0;
    k=2;
    cout<<"enter a number ";
    cin>>num2;
    cout<<endl;
    while(k<=num2){
        sum1=sum1+k;
        k=k+2;
    }
    cout<<sum1<<endl;
    
    return 0;
}

/*
ask if user wantes temp in farenhight or celcius
if f
enter in celcius
f=c+32
print f
if c
enter in farenhight 
c=f-32
print c
*/