#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    double arr[size],sum_pos=0.0,sum_neg=0.0;
    int i=0,j=0;
    cout<<"Enter the Element of the array:\n";
    while(i<size){
        cin>>arr[i];
        i++;
    }
    while(j<size){       
        if(arr[j]>0)
                sum_pos+=arr[j];
        else
                sum_neg+=arr[j];
                j++;
    }
    cout<<"sum of positive number : "<<sum_pos;
    cout<<"\nsum of Negative number : "<<sum_neg;
}