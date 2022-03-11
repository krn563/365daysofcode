#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row_size,col_size;
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
     //compute the minimum element of the given 2d array
    int min=INT_MAX;
    for(i=0;i<row_size;i++){
        for(j=0;j<col_size;j++){
            if(matrix[i][j]<=min)
            min=matrix[i][j];
        }
    }
    //Display the smallest element of the given matrix
    printf("The Minimum element of the Given 2d array is: %d",min);
}