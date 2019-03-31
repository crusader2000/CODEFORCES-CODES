#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
		return b;
	return a;
}
int main()
{
	int a,b,c,min1=1000,min2=10000,min3=10000;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
		printf("0");
	else
	{ if((a+b)<=c)
		min1=c-a-b+1;
		if((b+c)<=a)
			min3=a-b-c+1;
		if((c+a)<=b)
			min2=b-a-c+1;
		printf("%d",min(min(min1,min2),min3));
	}
}
