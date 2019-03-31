#include<iostream>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		int k=3,sum=0;
		while(k--)
		{
			int temp;
cin>>temp;
sum+=temp;
		}
		if(sum>=2)
			count++;
	}
	cout<<count<<endl;
}