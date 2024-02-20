#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to check whether a number is odd or even---\n\n";
    int n;
    cout<<"Enter number: ";
    while (!(cin >> n)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore();
    }
    if(n%2==0){
        cout<<"Number is even\n";
    }
    else if(n%2!=0){
        cout<<"Number is odd\n";
    }
    else{
        cout<<"Invalid input\n";
    }
    return 0;
}