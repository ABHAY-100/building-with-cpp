// Program to Check if a Number is an Adam Number.

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void mainFunc(int num){
    int temp = pow(num, 2);
    string rev_1 = to_string(temp);
    reverse(rev_1.begin(), rev_1.end());
    int rev_2 = stoi(rev_1);
    int sq = sqrt(rev_2);

    string sq_string = to_string(sq);
    reverse(sq_string.begin(), sq_string.end());
    int sq_rev = stoi(sq_string);
    if(num == sq_rev){
        cout<<num<<" is a Adam number"<<endl;
    }
    else{
        cout<<num<<" is not a Adam number"<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    mainFunc(num);
    return 0;
}