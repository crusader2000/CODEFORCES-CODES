#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	int l,r;
	scanf("%d %d",&l,&r);
	int num=r-l+1;

	if(num==1)
		printf("%d\n",(l%2==0)?l:-l);
	else if(num%2==0 && l%2==0)
		printf("%d\n",-(num/2));
	else if(num%2==0 && l%2==1)
		printf("%d\n",(num/2));
	else if(num%2==1 && l%2==1)
		printf("%d\n",(num/2)-r);
	else if(num%2==1 && l%2==0)
		printf("%d\n",-(num/2)+r);
}
}
