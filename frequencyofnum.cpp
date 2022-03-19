#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size,j;
    cin>>size;
    int arr[size],max=INT_MIN;
    cout<<"Enter the Element of the array:\n";
    for(j=0;j<size;j++){
        cin>>arr[j];
        if(arr[j]>=max)
            max=arr[j];
    }
    int freq[max+1];
    for(j=0;j<max+1;j++){
        freq[j]=0;
    }
    for(j=0;j<size;j++)
        freq[arr[j]]++;
    for(j=0;j<max+1;j++){
        if(freq[j]!=0)
            cout<<"occurs "<<j<<" "<<freq[j]<<" times\n";
    }
}