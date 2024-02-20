// Program to Check if a Number is an Armstrong number

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
        sum += pow(arr[i], 3);
    }
    if(num == sum){
        cout<<num<<" is an Armstrong number";
    }
    else{
        cout<<num<<" is not an Armstrong number";
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    mainFunction(num);
    return 0;
}