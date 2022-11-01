#include<iostream>
using namespace std;
int main(){
    int amt,notes;
    cout<<"enter the amount ";
    cin>>amt;

    switch(notes){
        int hun=amt/100;
        case 100:cout<<"number of 100 notes "<<hun<<endl;
            break;
        amt=(100*hun)-amt;
        int fift=amt/50;
        case 50:cout<<"number of 50 notes "<<fift<<endl;
            break;
        amt=(50*fift)-amt;
        int twe=amt/20;
        case 20:cout<<"number of 20 notes "<<twe<<endl;
            break;
        amt=(20*twe)-amt;
        int one=amt/1;
        case 1:cout<<"number of 1 notes "<<one<<endl;
            break;
        


    }
    return 0;
}