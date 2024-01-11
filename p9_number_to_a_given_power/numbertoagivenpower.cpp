#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"---Program to compute the power a given number to a given power---\n\n";
    int base, power;
    cout<<"Enter the base value: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;
    int val = pow(base, power);
    cout<<"Answer: "<<val<<endl;
    return 0;
}