#include<iostream>
using namespace std;
int main()
{
	int t=5,sum=0;
	while(t--)
	{
		int a;
		cin>>a;
		sum+=a;
	}
	if(sum%5==0 && sum!=0)
		cout<<sum/5<<endl;
	else
		cout<<"-1"<<endl;
}