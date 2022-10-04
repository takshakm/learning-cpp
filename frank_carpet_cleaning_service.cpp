#include<iostream>
using namespace std;
int main(){
    cout<<"Hello, welcome to Frank's Cleaning Service\n"<<endl;
    int small_rooms;
    int large_rooms;
    const int per_small_room=25;
    const int per_large_room=35;
    cout<<"Number of small rooms: ";
    cin>>small_rooms;
    cout<<"Number of large rooms: ";
    cin>>large_rooms;
    cout<<"Price per small room: $"<<per_small_room <<endl;
    cout<<"Price per large room: $"<<per_large_room <<endl;
    int small{small_rooms*per_small_room};
    int large{large_rooms*per_large_room};
    int a{small+large};
    cout<<"Cost: $"<<small+large<<endl;
    double tax{a*0.06};
    cout<<"Tax: $"<<tax<<endl;
    cout<<"=================================================="<<endl;
    cout<<"Total Estimate: $"<<a+tax<<endl;
    cout<<"This estimate is valid for 30 days"<<endl;
    return 0;   
}