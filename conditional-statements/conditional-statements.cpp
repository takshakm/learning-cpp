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

    //a simple program to tell greater between two numbers
    int num1, num2;
    cout<<"enter two numbers "<<endl;
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else if(num2>num1){
        cout<<num2<<" is greater than "<<num1<<endl;
    }
    else {
        cout<<num1<<" is equal to "<<num2;
    }

    //check if a char is lowercase, uppercase or numeric
    char a;
    cout<<"enter a character "<<endl;
    cin>>a;
    if(isupper(a)){
        cout<<"upper"<<endl;
    }
    else if(islower(a)){
        cout<<"lower"<<endl;
    }
    else{
        cout<<"numeric";
    }
    
    return 0;

}
