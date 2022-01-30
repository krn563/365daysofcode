#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Print first index element"<<d.at(1)<<endl;
    cout<<"Front"<<d.front()<<"\n";
    cout<<"back"<<d.back()<<"\n";
    cout<<"Enprty or not:"<<d.empty()<<endl;
    cout<<"size before erase"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size after erase"<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}