#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int a,b,k;
			scanf("%lld %lld %lld",&a,&b,&k);
			printf("%lld\n",(k-k/2)*a-(k/2)*b);
	}
}
