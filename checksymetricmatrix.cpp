#include<iostream>
using namespace std;
int main()
{
    int row_size,col_size;
    //Get size of matrix
    cout<<"Enter the row Size Of the Matrix:";
    cin>>row_size;
    cout<<"Enter the columns Size Of the Matrix:";
    cin>>col_size;
    int matrix[row_size][col_size];
    //Taking input of the matrix
    int i,j;
    cout<<"Enter the Matrix Element:\n";
    for(i=0;i<row_size;i++){
        for(j=0;j<col_size;j++){
            cin>>matrix[i][j];
        }
    }
    if(row_size!=col_size){
        cout<<"Given Matrix is not a Square Matrix.";
    }
    else{
    //compute the transpose matrix
        int tran_matrix[col_size][row_size];
        for(i=0;i<col_size;i++){
            for(j=0;j<row_size;j++){
            tran_matrix[i][j]=matrix[j][i];
        }
    }
    /*check given matrix elements and transpose matrix elements are same or not.*/
    int flag=0;
    for(i=0;i<col_size;i++){
        for(j=0;j<row_size;j++){
            if(matrix[i][j]!=tran_matrix[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
        cout<<"Given Matrix is not a symmetric Matrix.";
    else
        cout<<"Given Matrix is a symmetric Matrix.";
    }
}