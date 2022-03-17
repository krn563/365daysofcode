#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size],i=0,min=INT_MAX,sec_min=INT_MAX,j=0;
     cout<<"Enter the Element of the array:\n";
     while(j<size){
        cin>>arr[j];
        j++;
    }
    while(i<size){
        if(arr[i]<=min){
            sec_min=min;
            min=arr[i];

        }
        else if(arr[i]<=sec_min)
            sec_min=arr[i];

        i++;
    }
    cout<<"The 2nd smallest element of array: "<<sec_min;
}