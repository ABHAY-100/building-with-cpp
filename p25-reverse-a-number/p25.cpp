// C++ program to display a given number with its digits reversed

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;
int myFunction(int num){
    int rev;
    string temp1 = to_string(num);
    reverse(temp1.begin(), temp1.end());
    rev = stoi(temp1);
    return rev;
}
int main(){
    int num, rev;
    cout<<"Enter a number: ";
    cin>>num;
    rev = myFunction(num);
    cout<<"The reverse of "<<num<<" is: "<<rev<<endl;
    return 0;
}