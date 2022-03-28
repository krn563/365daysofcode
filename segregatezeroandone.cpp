#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,temp=0,j;
    cout<<"Enter the Element of the array(only 0s and 1s):\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int c=0;
    for(i=0;i<size;i++){
        if(arr[i]==0){
            c++;
        }
    }
    for(i=0;i<c;i++){
        arr[i]=0;
    }
     for(i=c;i<size;i++){
        arr[i]=1;
    }
    cout<<"After segregate 0s and 1s in an Array, Array is:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}