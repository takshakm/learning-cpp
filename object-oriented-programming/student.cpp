#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    //States
    string name;
    int age;
    string color;
    char sex;   //f or m


    //Method:-
    //Behaviour == Method
    //Method == A set of Code which only runs when it is called.
    //You can pass data known as parameters in a method.
    //Methods are also known as functions.

    public: void Eating(){
        cout<<"Eating";
    }
    public: void Drinking(){
        cout<<"Drinking";
    }
    public: void Running(){
        cout<<"Running";
    }
};