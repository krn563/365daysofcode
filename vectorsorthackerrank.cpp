/*You are given N integers.Sort the N integers and print the sorted order.
Store the N integers in a vector.Vectors are sequence containers representing arrays that can change in size.*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector<int>v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}