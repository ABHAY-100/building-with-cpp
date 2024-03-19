// C++ Program to Demonstrate do-while loop
#include <iostream>
using namespace std;
int main(){
    int a, d, n;
    cout<<"Enter a, d & n of an AP:";
    cin>>a>>d>>n;
    cout<<"AP: \t";
    do{
        cout<<a<<" ";
        a += d;
    }while(n-- > 1);
}