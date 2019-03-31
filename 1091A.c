#include<stdio.h>
int main()
{
	int y,b,r,sum=0;
	scanf("%d %d %d",&y,&b,&r);
	if(y<b)
	{
		if(b<=r)
			sum=3*y+3;
		else if(r>y)
			sum=3*y+3;
		else if(r<=y)
			sum=3*r-3;
	}
	else if(y==b)
	{
if(b>=r)
	sum=3*r-3;
else
	sum=3*b;
	}
	else
	{
if(b>=r)
	sum=3*r-3;
else if(y>=r)
	sum=3*r-3;
else if(y<r)
	sum=3*y+3;
	}
	printf("%d\n",sum);
}
