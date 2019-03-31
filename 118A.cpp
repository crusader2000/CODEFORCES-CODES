#include<iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int len;
	for(len=0;a[len]!='\0';len++)
	{
		if(a[len]=='A' || a[len]=='E' || a[len]=='I' || a[len]=='O' ||a[len]=='U' || a[len]=='Y' ||a[len]=='a' || a[len]=='e' || a[len]=='i' || a[len]=='o' ||a[len]=='u' || a[len]=='y')
			continue;
		else if(a[len]<'a')
			cout<<'.'<<(char)(a[len]+32);
		else
			cout<<'.'<<a[len];
	}
}