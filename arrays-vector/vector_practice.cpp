#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"elements in vector1 "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"size of vector1 is "<<vector1.size()<<endl<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"elements in vector2 "<<endl;
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"size of vector2 is "<<vector2.size()<<endl<<endl;

//empty 2d vector code begins here
    vector<vector<int>>vector_2d;
        vector_2d.push_back(vector1);
        vector_2d.push_back(vector2);

    cout<<"elements in vector_2d "<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;

    vector1.at(0)=1000;
    cout<<"elements in vector_2d "<<endl;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<" "<<vector_2d.at(1).at(1)<<endl;
    
    cout<<"elements in vector1 "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    

}