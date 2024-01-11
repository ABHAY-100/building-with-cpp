#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to calc sum of n natural numbers---\n\n";
    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the "<<(i+1)<<"th number: ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"Sum of "<<n<<" numbers = "<<sum<<endl;
}