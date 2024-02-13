// C++ Program to Print All Perfect Cubes Below 1000

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    cout<<"Perfect Cube's: ";
    for(int i=1; pow(i,3)<1000; i++){
        cout<<setw(3)<<setfill('0')<<pow(i,3)<<" ";
    }
    return 0;
}