// C++ Program to Check if a Matrix is a Triangular Matrix
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int row, column;
    cout<<"\nEnter the number of rows and columns of Matrix : ";
    cin>>row>>column;
    int A[row][column];
    int flagA=0, flagB;
    if(row != column){
        cout<<"\nThe given matrix is not a square matrix\n";
        exit(0);
    }
    cout<<"\nEnter the elements of Matrix :";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>A[i][j];
            if(i>j && A[i][j]!=0){
                flagA=1;
            }
            if(i<j && A[i][j]!=0){
                flagB=1;
            }
        }
    }
    if(flagA==0 || flagB==0){
        cout<<"\nThe given matrix is a triangular matrix\n";
    }
    else{
        cout<<"\nThe given matrix is not a triangular matrix\n";
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
}