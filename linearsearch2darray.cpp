#include<iostream> 
using namespace std;
bool ispresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    cout<<"start";
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the element to search:"<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}