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
    cout<<"Enter the Sum Value:";
    int sum;
    cin>>sum;
    int flag=0;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){  
                flag=1;
                cout<<"Given sum pair of element are "<<arr[i]<<" and "<<arr[j]<<".\n";
            }

        }
    }
    if(flag==0)
    cout<<"Given sum Pair is not Present.";
}