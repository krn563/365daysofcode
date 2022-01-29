#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
   vector<int> a(5,1);  //5->size of vector, 1-> all elements are assigned 1
   vector<int> last(a); //copies array a to itself
   cout<<"Capacity"<<v.capacity()<<" ";
   v.push_back(1);
   cout<<"Capacity"<<v.capacity()<<" ";
   v.push_back(2);
   cout<<"Capacity"<<v.capacity()<<"\n";
   v.push_back(3);
   cout<<"Capacity"<<v.capacity()<<"\n";
   cout<<"size"<<v.size()<<" ";
   cout<<"Element at 2nd index"<<v.at(2)<<"\n";
   cout<<"Front"<<v.front()<<"\n";
   cout<<"back"<<v.back()<<"\n";
   cout<<"befor pop";
   for(int i:v){
       cout<<i<<" ";
   }
   cout<<"\n";
   v.pop_back();
   cout<<"after pop";
   for(int i:v){
       cout<<i<<" ";
   }
   cout<<"before clear size"<<v.size()<<"\n";
   v.clear();
   cout<<"after clear size"<<v.size()<<"\n";
   cout<<"after clear capacity"<<v.capacity()<<"\n";
   for(int i:a){
       cout<<i<<" ";
    }
    cout<<"\n";
    for(int i:last){
       cout<<i<<" ";
    }
}