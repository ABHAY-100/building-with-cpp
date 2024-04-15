// C++ Program to Print the 1's Complement of an Integer

#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  if(num<0){
    cout<<num<<" is not a positive number";
  }
  else{
    cout<<"The 1's Complement of "<<num<<" is: ";
    complement(num);
  }
  return 0;
}
void complement(int num){
  int rem;
  if(num<=1){
    cout<<!num;
    return;
  }
  rem = num%2;
  complement(num/2);
  cout<<rem;
}