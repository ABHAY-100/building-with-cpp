// C++ Program to check for a Palindrome

#include <iostream>
#include <string>
using namespace std;
bool isPali(string input){
    int len = input.length();
    for(int i=0; i<len/2; i++){
        if(input[i] != input[len - i - 1]){
            return false;            
        }
    }
    return true;
}
int main(){
    string input;

    cout<<"Enter a number or string: ";
    getline(cin, input);

    if(isPali(input)){
        cout<<input<<" is Palindrome";
    }
    else{
        cout<<input<<" is not a Palindrome";
    }
    return 0;
}