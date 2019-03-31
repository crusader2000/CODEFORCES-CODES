#include<stdio.h>
int abs(int x)
{
	if(x<0)
		return -x;
	return x;
}
int main()
{
	int n,arr[105],max=0,x=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(max<arr[i])
		{
			max=arr[i];
			x=i;
		}
	}
	long long int ans=0;
	
	for(int i=2;i<=n;i++)
		ans+=((abs(i-x)+i+x-2)*arr[i]);
	
	ans+=(arr[1]*(x-1));

	printf("%lld\n",2*ans);
}