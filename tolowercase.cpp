#include<iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
        return temp;
    }
}
int main(){
    cout<<"The srtring is:"<<toLowercase('A')<<endl;
    cout<<"The srtring is:"<<toLowercase('b');
    
}