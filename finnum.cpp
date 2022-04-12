#include<iostream>
using namespace std;
bool lsearch(int Arr[], int s, int VAL);
int main()
{
	int Arr[100],n,val;
	bool found;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
	cout<<"Enter the number you want to search ";
	cin>>val;
	found=lsearch(Arr,n,val);
	if(found)
		cout<<"\nItem found";
	else
		cout<<"\nItem not found";
	
	return 0;
}
bool lsearch(int Arr[], int s, int VAL){
	for(int I=0; I<s; I++){
		if(Arr[I]==VAL)
			return true;
	}
	return false;
}
