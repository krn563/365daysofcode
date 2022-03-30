#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,temp=0,j,p;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int First_element=arr[0];
    int Second_element=arr[1],product,Max_Product=First_element*Second_element;
    for(i=0;i<size-1;i++){
       for(j=i+1;j<size;j++){
            product=arr[i]*arr[j];
            if(abs(product)>abs(Max_Product)){
                Max_Product=product;
                First_element=arr[i];
                Second_element=arr[j];
            }
       }
   }
   cout<<"Pair of Maximum Product is ("<<First_element<<","<<Second_element<<")";
   cout<<"\nMaximum Product of 2 numbers is "<<Max_Product;
}