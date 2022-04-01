#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter the size of the array:";
    int size;
    cin>>size;
    int arr[size];
    int i,temp=0,j,k;
    cout<<"Enter the Element of the array:\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int First_element=arr[0],Second_element=arr[1];
    int third_element=arr[2],product,Max_Product=First_element*Second_element*third_element;
    for(i=0;i<size-2;i++){
       for(j=i+1;j<size-1;j++){
            for(k=j+1;k<size;k++){
                product=arr[i]*arr[j]*arr[k];
                if(abs(product)>=abs(Max_Product)){
                    Max_Product=product;
                    First_element=arr[i];
                    Second_element=arr[j];
                    third_element=arr[k];
                }
            }
        }
    }
   cout<<"Maximum Product of 3 numbers pair is ("<<First_element<<","<<Second_element<<","<<third_element<<")";
   cout<<"\nMaximum Product of 3 numbers is "<<Max_Product;
}