// C++ Program to Print all the Armstrong Numbers

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
        cout<<num<<endl;
    }
}
int main(){
    cout<<"The Armstrong Numbers are: "<<endl;
    for(int i=0; i<1000; i++){
        mainFunction(i);
    }
    return 0;
}