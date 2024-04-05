#include <iostream>
#include <string>
using namespace std;
int main(){
    char str[100] = "Roll No. 41";
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            str[i]='%';
        }
    }
    cout<<str<<endl;
}