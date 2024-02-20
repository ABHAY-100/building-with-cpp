// C++ program to display the factors of the entered number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The factor's: ";
    for(int i=1; i<=num; i++){
        if(num%i==0){
            cout<<i<<"\t";
        }
    }
    return 0;
}