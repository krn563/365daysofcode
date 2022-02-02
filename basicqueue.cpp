#include<iostream>
#include<queue>   //FIFO- First in first out
using namespace std;
int main(){
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    cout<<"First element:"<<q.front()<<endl;
    cout<<"Size:"<<q.size()<<endl;
    q.pop();
    cout<<"After pop:"<<"\n";
    cout<<"First element:"<<q.front()<<endl;
    cout<<"Size:"<<q.size()<<endl;
}