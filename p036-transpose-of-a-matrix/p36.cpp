// C++ Program to Find Transpose of a Matrix
#include <iostream>
using namespace std;
int main(){
    int row, column;
    cout<<"\nEnter the number of rows and columns of Matrix : ";
    cin>>row>>column;

    int A[row][column];
    cout<<"\nEnter the elements of Matrix :";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>A[i][j];
        }
    }

    cout<<"\nEntered Matrix : \n";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Finding the Transpose
    int C[column][row];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            C[i][j] = A[j][i];
        }
    }

    cout<<"\nTranspose Matrix : \n";
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}