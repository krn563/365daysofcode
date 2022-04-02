#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,j;
    cout<<"Enter the Element of the array(only 0s, 1s, and 2s):\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++)
            if(arr[i]>=arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    cout<<"After segregate 0s, 1s and 2s in an Array, Array is:";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}