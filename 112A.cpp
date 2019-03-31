#include<iostream>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]<'a')
			a[i]+=32;
        if(b[i]<'a')
			b[i]+=32;
		i++;
	}
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]>b[i] )
		{
			cout<<"1"<<endl;
			break;
		}
		else if(b[i]>a[i])
		{
		cout<<"-1"<<endl;
			break;
		}
		i++;
	}
	if(a[i]=='\0')
	cout<<"0"<<endl;
}