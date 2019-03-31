#include<stdio.h>
int main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	while(b--)
	{
		if(a%10==0)
		{
			a/=10;
			continue;
		}
		a--;
	}
	printf("%lld\n",a);
}
