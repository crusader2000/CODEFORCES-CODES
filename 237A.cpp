#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t][2];
	for(int i=0;i<t;i++)
	cin>>arr[i][0]>>arr[i][1];
int count=0,temp=1;
	for(int i=1;i<t;i++)
	{
		if(temp>count)
			count=temp;
		if(arr[i-1][0]==arr[i][0] && arr[i-1][1]==arr[i][1])
			temp++;
		else
			temp=1;
	}	
		if(temp>count)
			count=temp;
cout<<count<<endl;
}