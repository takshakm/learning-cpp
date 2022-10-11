/*a simple program to print 
12345
12345
12345
12345
12345
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<col;
            ++col;
        }
        cout<<endl;
        ++row;
    }
}

//completed