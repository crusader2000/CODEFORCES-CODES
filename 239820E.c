#include <stdio.h>
#include<math.h>
long long int hcf(long long int n1, long long int n2)
{
	if (n2 == 0)
		return n1;
	return hcf(n2, n1%n2);
}
long long int primefactors(long long int n)
{
	long long int count=0;
	while(n%2==0)
	{
		count++;
		n/=2;
	}
	long long int temp=1;
	while(temp*temp<=n)
		temp++;
	for(long long int i=3;i<=temp;i+=2)
	{
		while(n%i==0)
		{
			count++;
			n/=i;
		}
	}
	if(n>1)
		count++;
	return count;
}
long long int main()
{
	long long int n,m;
	scanf("%lld %lld",&n,&m);
	long long int arr[200];
	long long int arr2[200][2];
	for(long long int i=1;i<=n;i++)
		scanf("%lld",&arr[i]);
	for(long long int i=1;i<=m;i++)
		scanf("%lld %lld",&arr2[i][0],&arr2[i][1]);
	long long int count=0;
	for(long long int i=1;i<=m;i++)
	{
		long long int temp=999;
		while(temp)
		{
			temp=hcf(arr[arr2[i][0]],arr[arr2[i][1]]);
			if(temp==1)
				break;
			arr[arr2[i][0]]/=temp;
			arr[arr2[i][1]]/=temp;
			count+=primefactors(temp);
		}
	}
	printf("%lld\n",count);
}