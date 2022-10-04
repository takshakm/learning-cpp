#include<iostream>
using namespace std;
int main(){
    const int per_room= 30;
    cout<<"***FRANK'S CARPET CLEANING SERVICE***"<<endl;
    int num_of_rooms;
    cout<<"Enter the number of rooms "<<endl;
    cin>>num_of_rooms;
    cout<<"price per room $"<<per_room<<endl;
    const int cost=per_room*num_of_rooms;
    cout<<"cost $"<<cost<<endl;
    const double tax=cost*0.06;
    cout<<"tax $"<<tax<<endl;
    const float ttl=cost+tax;
    cout<<"total estimate $"<<ttl<<endl;
    cout<<"this estimate is valid for 30 days";
    return 0;   
}