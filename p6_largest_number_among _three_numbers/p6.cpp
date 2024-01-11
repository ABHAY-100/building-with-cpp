#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to find largest of 3 numbers---\n\n";
    double x, y, z;
    cout<<"Enter 3 numbers: ";
    while(!(cin>>x>>y>>z)){
        cout<<"Enter a valid set of 3 numbers...";
        cin.clear();
        cin.ignore();
    }
    if(x>y && x>z){cout<<x<<" is greater"<<endl;}
    else if (y>x && y>z){cout<<y<<" is greater"<<endl;}
    else if(z>x && z>y) {cout<<z<<" is greater"<<endl;}
    else if(x==y && x==z && y==z){cout<<"all are equal"<<endl;}
    else{cout<<"Try Again!!!"<<endl;}
    return 0;
}