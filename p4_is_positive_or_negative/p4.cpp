#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to check whether a number is positive or negative---\n\n";
    int n;
    cout<<"Enter a number: ";
    while(!(cin>>n)){
        cout<<"Enter a vaild number: ";
        cin.clear();
        cin.ignore();
    }
    if(n<0){cout<<"The number is negative.\n";}
    else if(n>0){cout<<"The number is positive.\n";}
    else{cout<<"The number is zero.\n";}
    return 0;
}