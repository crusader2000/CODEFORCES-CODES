#include<stdio.h>
int main()
{
	int x,flag=0;
	scanf("%d",&x);
	int i=1,j;
	for(;i<=x;i++)
	{
		for(j=2;j<=x;j++)
			if(i%j==0 && i*j>x && (i/j)<x )
			{
				printf("%d %d\n",i,j);
				flag=1;
				break;
			}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("-1");
}
