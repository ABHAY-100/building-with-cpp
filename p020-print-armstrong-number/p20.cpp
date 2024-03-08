// C++ Program to Check whether a number is a Armstrong Numbers

#include <iostream>
#include <cmath>
using namespace std;
int findLength(int num){
    int len=0;
    while(num!=0){
        num = num/10;
        len++;
    }
    return len;
}
void mainFunction(int num){
    int len = findLength(num);
    int arr[len], temp=num, sum=0;
    for(int i=0; i<len; i++){
        arr[i] = temp%10;
        temp /= 10;
    }
    for(int i=0; i<len; i++){
        sum += pow(arr[i], len);
    }
    num == sum ? cout<<num<<" is a Armstrong Number"<<endl : cout<<num<<" is not a Armstrong Number"<<endl;
}
int main(){
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    mainFunction(num);
    return 0;
}