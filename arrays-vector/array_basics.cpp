#include<iostream>
#include<cfloat>
#include<climits>
using namespace std;
int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "the second vowel is: "<<vowels[1]<<endl;
    cout << "the second last vowel is: "<<vowels[3]<<endl<<endl;
    double hi_temps[] {90.1,43,89.8};
    cout<<"the first high temp "<<hi_temps[0]<<endl;
    hi_temps[0]=100.7;
    cout<<"hi temps changed "<<hi_temps[0]<<endl<<endl;

    long test_scores[8]{};
    cout<<"first at index 0 "<<test_scores[0]<<endl;
    cout<<"at index 1 "<<test_scores[1]<<endl;
    cout<<"at index 2 "<<test_scores[2]<<endl;
    cout<<"at index 3 "<<test_scores[3]<<endl;
    cout<<"at index 4 "<<test_scores<<endl;
    cout<<"enter 5 test scores";
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    cin>>test_scores[5];
    cin>>test_scores[6];
    cin>>test_scores[7];

    cout<<"first at index 0 "<<test_scores[0]<<endl;
    cout<<"at index 1 "<<test_scores[1]<<endl;
    cout<<"at index 2 "<<test_scores[2]<<endl;
    cout<<"at index 3 "<<test_scores[3]<<endl;
    cout<<"at index 4 "<<test_scores[4]<<endl;
    cout<<"at index 5 "<<test_scores[5]<<endl;
    cout<<"at index 6 "<<test_scores[6]<<endl;
    cout<<"at index 7 "<<test_scores[7]<<endl;
}