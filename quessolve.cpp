/*You have 15 Rupees . 1 chocolate in 1 rupee, 3Wrapper =1Chocolate.Find total number of chocolates
 you can have .*/
#include<iostream>
using namespace std;
int main(){
    int n=15;
    int w=3;
    int s=0;
    int t=n;
    int a,d;
    while(n>=w){
        a=n/w;
        d=s;
        s=n%w;        
        if(a+s>=1){
            t=t+a;
        }
        else if(a+d>=1){
            t=t+a;
            d=0;
        }
        n=a+s;
    }
    cout<<"Total chocolates:"<<t;
}