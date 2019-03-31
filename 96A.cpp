#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0,count=0;
	while(s[i]!='\0')
	{
		if(count>=6)
			break;
		else if(s[i]==s[i+1])
			count++;
		else
			count=0;
		i++;
	}

	if(count!=6)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
}