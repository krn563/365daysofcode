#include<iostream>
using namespace std;
char toUppercase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch;
    }
    else{
        char temp= ch-'a'+'A';
        return temp;
    }
}
int main(){
    cout<<"The srtring is:"<<toUppercase('A')<<endl;
    cout<<"The srtring is:"<<toUppercase('b');
    
}