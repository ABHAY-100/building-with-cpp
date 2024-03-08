// C++ program to print Fibonacci Series

#include <iostream>
using namespace std;
int main(){
    int num1=0, num2=1, num3, limit;
    cout<<"Enter the limit: ";
    cin>>limit;
    int i=2;
    limit<2 ? cout<<"Fibonacci Series: "<<num1 : cout<<"Fibonacci Series: "<<num1<<"\t"<<num2<<"\t";
    while (i<limit)
    {
        num3 = num1 +num2;
        cout<<num3<<"\t";
        num1 = num2;
        num2 = num3;
        i++;
    }
}