#include<iostream>
using namespace std;
int main(){
    char ch ='a';
    int num=1;
    switch(num){
        case 1: cout<<"First "<<endl;
                //break;
        case '1': switch(num){
            case 1: cout<<"value of 1 is num"<<num<<endl;
            break;
        }
        break;
        default: cout<<"It is Default Case"<<endl;
    }
    cout<<endl;
    return 0;
}