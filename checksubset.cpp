#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the 1st array:";
    int size,i;
    cin>>size;
    int arr[size];
    cout<<"Enter the size of the 2nd array:";
    int size2;
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the Element of the 1st array:\n";
     for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element of the 2nd array:\n";
    for(i=0;i<size2;i++){
        cin>>arr2[i];
    }
    int j,count=0;
    for(i=0;i<size;i++){
        for(j=0;j<size2;j++){
            if(arr[i]==arr2[j]){
              count++;
            }
        }
    }
    if(count==size2)
        cout<<"Array two is a subset of array one.";
    else
        cout<<"Array two is not a subset of array one";
}
