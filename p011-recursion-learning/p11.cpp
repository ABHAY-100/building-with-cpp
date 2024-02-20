#include <iostream>
using namespace std;
int myFunc(int n){
    if(n>0){
        return n+myFunc(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int sum = myFunc(10);
    cout<<sum<<endl;
    return 0;
}