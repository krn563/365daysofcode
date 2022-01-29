
#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<i<<" ";
    }
}