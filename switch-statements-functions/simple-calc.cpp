#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opr;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"what operation would you like to perform"<<endl;
    cin>>opr;
    switch(opr){
        case '*':cout<<" Multiplication is "<<a*b<<endl;
            break;
        case '/':cout<<"Division is "<<a/b<<endl;
            break;
        case '+':cout<<"Sum is "<<a+b<<endl;
            break;
        case '-':cout<<"Subtraction is "<<a-b<<endl;
            break;
        default:cout<<"please enter a valid case"<<endl;
    }
    return 0;
}