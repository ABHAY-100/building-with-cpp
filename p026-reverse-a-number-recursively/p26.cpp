// Program in C++ to reverse a number recursively

#include <iostream>
using namespace std;
int reverseNum(int num, int result = 0){
    if(num==0){
        return result;
    }
    else{
        result = result*10 + num%10;
        return reverseNum(num/10, result);
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result=reverseNum(num);
    cout<<"Reversed Number = "<<result;
    return 0;
}