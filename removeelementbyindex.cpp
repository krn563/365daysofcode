#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array:";
    int size,i;
    cin>>size;
    int arr[size];
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"\nEnter the position of the Element:";
    cin>>pos;
    cout<<"\nBefore deleting array elements are:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    pos+=1;
    for(i=pos-1;i<size-1;i++)
        arr[i] = arr[i+1];
    cout<<"\nAfter Deleting Array Element are:";
    for(i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
}