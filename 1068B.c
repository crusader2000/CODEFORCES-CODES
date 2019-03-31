#include<stdio.h>
long long int  arr[100010]={0};
void sieve()
{
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i<=100005;i++)
		if(arr[i]==0)
			for(int k=2*i;k<=100005;k+=i)
				arr[k]=1;
}
int main()
{
	sieve();
	long long int b;
	scanf("%lld",&b);
	long long int count=0;
	int arr2[100005]={0};
	arr2[1]=1;
	for(long long int i=1;i*i<=b;i++)
	{
		if(b%i==0 && arr[i]==0)
		{
			arr2[i]=1;
			long long int temp=b;
			while(temp%i==0)
			{
				arr2[temp/i]=1;
				temp/=i;
			}
		}
	}
	for(long long int i=0;i<100005;i++)
		if(arr2[i] == 1)
			count++;
	if(b==1)
		count--;
	printf("%lld\n",count+1);
}
