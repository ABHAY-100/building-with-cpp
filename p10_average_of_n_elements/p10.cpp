#include <iostream>
using namespace std;
int main(){
    cout<<"---Program to calculate the average of all the elements present in an array---\n\n";
    int n;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    double arr[n];
    for(int i; i<n; i++){
        cout<<"Enter element no."<<(i+1)<<" :";
        cin>>arr[i];
    }
    double sum=0, avg=0;
    for(int i; i<n; i++){
        sum += arr[i];
    }
    for(int i; i<n; i++){
        avg = sum/n;
    }
    cout<<"Average: "<<avg<<endl;
}