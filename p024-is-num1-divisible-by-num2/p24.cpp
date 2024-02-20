// C++ Program to Check if a Number is Divisible By Second Number

#include <iostream>
using namespace std;
void isDivisible(int num1, int num2){
    if(!(num1%num2)){
        cout<<num1<<" is divisible by "<<num2;
    }
    else{
        cout<<num1<<" is not divisible by "<<num2;
    }
}
int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    isDivisible(num1, num2);
    return 0;
}