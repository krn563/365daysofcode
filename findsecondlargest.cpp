#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size],i=0,max=INT_MIN,sec_max=INT_MAX,j=0;
    cout<<"Enter the Element of the array:\n";
     while(j<size){
        cin>>arr[j];
        j++;
    }
    while(i<size){
        if(arr[i]>=max){
            sec_max=max;
            max=arr[i];
        }
        else if(arr[i]>=sec_max)
            sec_max=arr[i];
        i++;
    }
    cout<<"The 2nd largest element of array: "<<sec_max;
}