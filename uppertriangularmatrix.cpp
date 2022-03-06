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
    //display upper triangular matrix
    printf("Upper Triangular Matrix is:\n");
     for(i=0;i<row_size;i++){
        for(j=0;j<col_size;j++){
            if(i>j)
              cout<<"0"<<" ";
            else
                cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
}