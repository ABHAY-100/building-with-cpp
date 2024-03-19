// C++ Program to Illustrate try-catch Statement
#include <iostream>
#include <limits>
using namespace std;
typedef numeric_limits<char> ilimits;
void toChar(int i){
    try
    {
        if(i < ilimits::min() || i > ilimits::max()){
            throw 1;
        }
        else{
            cout<<"The character is: "<<static_cast<char>(i)<<endl;
            return;
        }
    }
    catch(int error)
    {
        cout<<"Range Error : exceeding character limits"<<endl;
    }
}
int main(){
    int i;
    cout<<"Enter the value: ";
    cin>>i;
    toChar(i);
}