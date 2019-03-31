#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ 
	string a;
cin>>a;
int i;
for(i=0;a[i]!='\0';i++);

if(i>10)
cout<<a[0]<<(i-2)<<a[i-1]<<endl;

else
cout<<a<<endl;
}

}