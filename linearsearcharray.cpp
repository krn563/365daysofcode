#include<iostream>

using namespace std;
int linearsearch(int array[],int a,int key){
    for(int i=0;i<a;i++){
        if(array[i]==key){
            return i;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter a number:";
        cin>>array[i];
    }
    int key;
    cout<<"Enter number to find:";
    cin>>key;
    cout<<linearsearch(array,n,key);
    
}