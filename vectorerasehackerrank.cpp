/*You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with  integer,
which denotes a position in the vector. The value at this position in the vector needs to be erased. The next queryconsists of 2 integers
denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed
on the updated vector which we get after performing the first query. Print the size of the vector in the first line and the elements of the
vector after the two erase operations in the second line separated by space.*/
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
    int b;
    cin>>b;
    v.erase(v.begin()+(b-1));
    int c,d;
    cin>>c>>d;
    v.erase(v.begin()+(c-1),v.begin()+(d-1));
    cout<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
