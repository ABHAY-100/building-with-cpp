#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to add n numbers---\n\n";
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nNum[n];
    for(int i=0; i<n; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>nNum[i];
    }
    int sumNum = 0;
    for(int i=0; i<n; i++){
        sumNum += nNum[i];
    }
    cout<<"Sum: "<<sumNum<<"\n";
    return 0;
}