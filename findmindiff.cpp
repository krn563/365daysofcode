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
    int Min_diff=INT_MAX;
     for(i=0;i<size-1;i++){
         for(j=i+1;j<size;j++){
              if(abs(arr[j]-arr[i])<Min_diff){
                 Min_diff=abs(arr[j]-arr[i]);
              }
        }
    }
    cout<<"Minimum difference between two Element is "<<Min_diff;
}
