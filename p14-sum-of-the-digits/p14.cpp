// C++ Program to Reverse a Number using While Loop

#include <iostream>
using namespace std;
int myFunction(int num){
    int r, rev=0;
    while(num!=0){
        r = num%10;
        rev = rev*10 + r;
        num /= 10;
    }
    return rev;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int result = myFunction(num);
    cout<<"The Reverse of "<<num<<" is "<<result;
    return 0;
}