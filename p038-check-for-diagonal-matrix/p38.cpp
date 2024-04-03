// C++ Program to Check if a Matrix is Diagonal Matrix
#include <iostream>
using namespace std;
int main(){
    int row, column, flag;
    cout<<"\nEnter the number of rows and columns of Matrix : ";
    cin>>row>>column;
    int A[row][column];
    cout<<"\nEnter the elements of Matrix :";
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            if(i==j){
                if(A[i][j] == 0){
                    flag = 1;
                }
            }
            else{
                if(A[i][j] != 0)
                flag =1;
            }
        }
    }
    if(flag == 1)
        cout<<"The given matrix is not diagonal matrix";
    else{
        cout<<"The given matrix is diagonal matrix\n";
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                cout<<A[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    return 0;
}