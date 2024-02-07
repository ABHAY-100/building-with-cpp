// Program to Check if a Character is a Vowel, Consonant or Digit

#include <iostream>
using namespace std;
int main(){
    char mainInput;
    cout<<"Enter a Character: ";
    cin>>mainInput;
    char input = mainInput;
    if(isalpha(input)){
        input = tolower(input);
        if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
            cout<<mainInput<<" is a Vowel";
        }
        else{
            cout<<mainInput<<" is a Consonant";
        }
    }
    else if(isdigit(input)){
        cout<<mainInput<<" is a Digit";
    }
    else{
        cout<<mainInput<<" is a Special Character";
    }
    return 0;
}