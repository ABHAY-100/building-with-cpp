// C++ Program to illustrate goto statement
#include <iostream>
using namespace std;
int main(){
    int i=0;
    cout<<"Print first 10 natural number without using loops\n";
    cout<<"Numbers: ";
    repeat:
    cout<<++i<<"\t";
    if(i<10){
        // i++;
        goto repeat;
    }
    cout<<endl;
}