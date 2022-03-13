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
   //check Diagonal elements are 1 and rest elements are 0
    int point=0;
    for(i=0;i<row_size;i++){
        for(j=0;j<col_size;j++){
            //check for diagonals element
            if(i==j && matrix[i][j]!=1){
                point=1;
                break;
            }
            //check for rest elements
            else if(i!=j && matrix[i][j]!=0){
                point=1;
                break;
            }
        }
    }
    if(point==1)
       cout<<"Given Matrix is not an identity matrix.";
    else
        cout<<"Given Matrix is an identity matrix.";
}