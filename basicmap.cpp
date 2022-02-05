#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="abc";
    m[13]="def";
    m[3]="ghi";
    m.insert({5,"jkl"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13--->"<<m.count(13)<<endl;
    m.erase(13);
    cout<<"After Erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13--->"<<m.count(13)<<endl;
}