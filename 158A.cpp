#include<iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n],count=0,temp=n;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	k=arr[k-1];

	int i;

	for(i=0;i<n;i++)
		if(arr[i]>=k && arr[i]!=0)
			count++;
	
	cout<<count<<endl;
	}
