// C++ program to compute factorial of a given integer
#include <iostream>
using namespace std;
int main(){
    int num, result=1;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num; i>0; i--){
        result*=i;
    }
    cout<<num<<"! = "<<result<<"\n";
}