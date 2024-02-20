#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to swap two numbers---\n\n";
    double num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    double temp;
    temp = num2;
    num2 = num1;
    num1 = temp;
    cout<<"1st: "<<num1<<endl
        <<"2nd: "<<num2<<endl;
    return 0;
}