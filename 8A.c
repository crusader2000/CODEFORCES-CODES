#include<stdio.h>
#include<string.h>
char a[100005],b[100000],c[100000];
int lena,lenb,lenc;
int temp1,temp2;
void forward()
{
	int i,temp=0,flag=0;
	for(i=0;i<lena;i++)
	{
		int j;
		for(j=0;j<lenb;j++)
		{
			if(a[i+j]!=b[j])
				break;
		}
		if(j==lenb)
		{flag=1;i+=lenb;break;}
	}
	if(flag==0)
		return;
	temp=0;
	flag=0;
	while(i<lena)
	{
		int j;
		for(j=0;j<lenc;j++)
		{
			if(a[i+j]!=c[j])
				break;
		}
		if(j==lenc)
		{temp1=1;break;}
		i++;
	}
}
void backward()
{
	int i=lena-1,flag=0;
	for(;i>=0;i--)
	{
		int j;
		for(j=0;j<lenb;j++)
		{
			if(a[i-j]==b[j])
				continue;
			else
				break;
		}
		if(j==lenb)
		{flag=1;i-=lenb;break;}
	}
	if(flag==0)
		return;
	while(i>=0)
	{
		int j;
		for(j=lenc-1;j>=0;j--)
		{
			if(a[i-j]==c[j])
				continue;
			else
				break;
		}
		if(j==-1)
		{temp2=1;break;}
		i--;
	}
}
int main()
{
	scanf("%s %s %s",a,b,c);
	lena=strlen(a);
	lenb=strlen(b);
	lenc=strlen(c);
	forward();
	backward();
	if(temp1==1 && temp2==0)
		printf("forward\n");
	if(temp1==0 && temp2==1)
		printf("backward\n");
	if(temp1==1 && temp2==1)
		printf("both\n");
	if(temp1==0 && temp2==0)
		printf("fantasy\n");
}
