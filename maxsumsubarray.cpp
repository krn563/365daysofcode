#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            maxsum=max(maxsum,sum);
            cout<<endl;
        }
    }
    cout<<"Max sum"<<maxsum;    
}