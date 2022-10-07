//program to check if a number is prime or not
/*
read num
a=2
a----!=num
if num%a==0
print not prime
else prime
*/
#include<iostream>
using namespace std;
int main(){
    int num,num1,a;
    a=2;
    cout<<"enter a number to check if prime or not ";
    cin>>num;
    while(a<num){
        if(num%a==0){
            cout<<"not prime "<<a<<endl;
        }
        else{
            cout<<"prime"<<a<<endl;
        }
        ++a;        
    }
    
}