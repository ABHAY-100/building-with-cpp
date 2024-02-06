#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year (in XXXX format): ";
    cin>>year;
    if(year%100==0 && year%400!=0){
        cout<<"It's not a leap year!";
    }
    else if(year%4==0 || (year%100==0 && year%400==0)){
        cout<<"It's a leap year!";
    }
    else{
        cout<<"It's not a leap year!";
    }
    return 0;
}