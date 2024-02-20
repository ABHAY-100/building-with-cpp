// C++ program to compute factorial of a given integer

#include <iostream>
using namespace std;
int myFunction(int num){
    int temp=1;
    while(num>0){
        temp *= num;
        num--;
    }
    return temp;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result = myFunction(num);
    cout<<num<<"! = "<<result;
    return 0;
}