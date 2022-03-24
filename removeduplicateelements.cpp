#include<iostream>
using namespace std;
int sort_arr(int arr[],int size){
    int i,j,temp;
    //Sort the array
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++)
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
}
main()
{
    cout<<"Enter the size of the array:";
    int size,i,j=0,temp;
    cin>>size;
    int arr[size];
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    sort_arr(arr,size);
    //Remove duplicate element
    for(i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[size-1];
    cout<<"After removing duplicate element from array: ";
    for(i=0;i<j;i++)
        cout<<arr[i]<<" ";
}