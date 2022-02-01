#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("abc");
    s.push("def");
    s.push("ghi");
    cout<<"Top Element:"<<s.top()<<endl;
    s.pop();
    cout<<"After pop"<<"\n";
    cout<<"Top Element:"<<s.top()<<endl;
    cout<<"Size of stack:"<<s.size()<<endl;
    cout<<"Empty or not:"<<s.empty();
}