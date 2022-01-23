#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check Prime:";
    cin>>n;
    int b=n%2;
    if (n==0){
        cout<<"0 is neither prime nor composite.";
    }
    else{
        switch (b)
        {
            case 0:
                cout<<"Prime";
                break;
    
            default:
                cout<<"Not Prime";
                break;
        }
    }    
}