#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to check prime numbers---\n\n";
    int num, i;
    cout<<"Enter the number: ";
    while(!(cin>>num)){
        cout<<"Enter a Vaild Number: ";
        cin.clear();
        cin.ignore();
    }
    for(i=2; i<num; i++){
        if(num%i==0){
            cout<<"The number "<<num<<" is not prime"<<endl;
            goto end;
        }
    }
    if(num<2){
        cout<<"The number "<<num<<" is not prime"<<endl;
        goto end;
    }
    else{
        cout<<"The number "<<num<<" is prime"<<endl;
        goto end;
    }
    end:
    return 0;
}