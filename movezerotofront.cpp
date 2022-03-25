#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,temp=0,j;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int c=size-1;
    for(i=size-1;i>=0;i--){
        if(arr[i]!=0){
            arr[c]=arr[i];
            c--;
        }
    }
    for(i=c;i>=0;i--){
        arr[c]=0;
        c--;
    }
    cout<<"After Move all zeros to Start, Array is:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}