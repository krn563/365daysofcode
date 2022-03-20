#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size],j=0,sum=0,cou=0,i;
    double avg;
    cout<<"Enter the Element of the array:\n";
     for(j=1;j<=size;j++){
        cin>>arr[j];
        if(j%2==0){
            sum+=arr[j];
            cou++;
        }
    }
    avg=(double)sum/(double)cou;
    cout<<"Average of Numbers in array at even position is "<<avg;
}