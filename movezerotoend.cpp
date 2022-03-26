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
    int c=0;
    for(i=0;i<size;i++){
        if(arr[i]!=0){
            arr[c]=arr[i];
            c++;
        }
    }
    for(i=c;i<size;i++){
        arr[c]=0;
        c++;
    }
    cout<<"After Move all zeros to end, Array is:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}