#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,j;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<size;i++){
        sum+=arr[i];
    }
    int size2=size+1;
    int miss=(size2*(size2+1))/2 - sum;
    cout<<"Missing Number is: "<<abs(miss);
}