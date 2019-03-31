#include<stdio.h>
int main()
{
	int x,s;
	scanf("%d %d",&x,&s);
	if(s%x!=0)
	printf("%d\n",(s/x)+1);
	else
	printf("%d\n",(s/x));

}
