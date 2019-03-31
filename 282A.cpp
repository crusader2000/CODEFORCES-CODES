#include<iostream>
using namespace std;
int main()
{
	int x=0,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s[1]=='-')
			x--;
		else
			x++;
	}
	cout<<x<<endl;
}