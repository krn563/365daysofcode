/*The first line of the input contains the number of integers N. The next line contains N
integers in sorted order. The next line contains Q, the number of queries. Then Q lines
follow each containing a single integer Y.
Note: If the same number is present multiple times, you have to print the first index
at which it occurs. Also, the input is such that you always have an answer for each query.
Output Format:
For each query you have to print "Yes" (without the quotes) if the number is present and
at which index(1-based) it is present separated by a space. If the number is not present
you have to print "No" (without the quotes) followed by the index of the next smallest 
number just greater than that number. You have to output each query in a new line.*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    vector<long long int> v;
    long long n,q,x;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>q;
        v.push_back(q);
    }
    cin>>q;
    vector<long long>::iterator low,up;
    while(q--){
        cin>>x;
        if(binary_search(v.begin(),v.end(),x)){
            low=lower_bound(v.begin(),v.end(),x);
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else{
            up=upper_bound(v.begin(),v.end(),x);
            cout<<"No "<<(up-v.begin()+1)<<endl;
        }
    }
    return 0;
}

