#include <iostream>
using namespace std;
int addNum(int a, int b){
    return a+b;
}
int main(){
    cout<<"---Program to add two numbers---\n\n";
    int a, b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    // cout<<"Sum: "<<a+b<<"\n";
    cout<<"Sum: "<<addNum(a, b)<<"\n";
    return 0;
}