#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,j;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int Max_diff=INT_MIN;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(abs(arr[j]-arr[i])>Max_diff){
                Max_diff=abs(arr[j]-arr[i]);
            }
        }
    }
     cout<<"Maximum difference between two Element is "<<Max_diff;
}