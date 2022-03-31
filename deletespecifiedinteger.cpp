#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,pos=0,temp=0;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"\nEnter the element to be deleted:";
    cin>>ele;
    cout<<"\nBefore deleting array elements are:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
        for(i=0;i<size;i++){
        if(arr[i]==ele){
            pos=i;
            temp=1;
        }
    }
    pos+=1;
    if(temp==1){
        for(i=pos-1;i<size-1;i++)
            arr[i] = arr[i+1];
    }
    cout<<"\nAfter deleting array elements are:";
    for(i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
    }
}