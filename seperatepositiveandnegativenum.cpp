#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size],j=0,i;
    cout<<"Enter the Element of the array:\n";
    for(j=0;j<size;j++){
    cin>>arr[j];
    }
    cout<<"\nPositive numbers are:";
    for(i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i]<<" ";
        }
    }

    cout<<"\nNegative numbers are:";
    for(i=0;i<size;i++){
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
}
