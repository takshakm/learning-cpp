#include<iostream>
using namespace std;
// the program will calculate the area of a room in sq
int main(){
    cout<<"enter the width of room ";
    int room_width{0};
    cin>>room_width;
    cout<<"enter length of the room ";
    int room_length{0};
    cin>>room_length;
    cout<<"the area of the room is "<<room_width*room_length<<" sq feet"<<endl;
    return 0;
}