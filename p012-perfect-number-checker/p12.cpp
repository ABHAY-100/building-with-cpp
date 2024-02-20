#include <iostream>
using namespace std;
int main(){
    cout<<"---Check Whether a Given Number is Perfect Number---\n\n";
    int num, div, sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1; i<num; i++){
        div= num%i;
        if(div==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"The number is a perfect number";
    }
    else{
        cout<<"It is not a perfect number";
    }
}