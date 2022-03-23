#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,odd_type=0,even_type=0;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        if(arr[i]%2==0)
            even_type++;
        else
            odd_type++;
    }
    if(even_type==size)
        cout<<"Even type array\n";
    else if(odd_type==size)
        cout<<"odd type array\n";
    else
        cout<<"Mixed array\n";
}