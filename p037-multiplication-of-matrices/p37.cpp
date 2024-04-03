// Matrix Multiplication in C++
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int r1, r2, c1, c2;
    cout<<"\nEnter the number of rows and columns of Matrix A : ";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns of Matrix B : ";
    cin>>r2>>c2;

    if(c1!=r2){
        cout<<"\nMatrices cannot be added!\n";
        exit(0);
    }
    int A[r1][c1], B[r1][c1], C[r1][c1];

    cout<<"\nEnter the elements of Matrix A :";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A[i][j];
        }
    }
    cout<<"\nEnter the elements of Matrix B :";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>B[i][j];
        }
    }

    cout<<"\nMatrix A : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nMatrix B : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Multiplication of two matrices
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            C[i][j] = 0;
            for(int k=0; k<r2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout<<"\nThe Result : \n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}