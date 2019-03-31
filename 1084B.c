#include<stdio.h>
long long int arr[1005];
int main()
{
	long long int n,s,sum=0,min=1000000009;
	scanf("%lld %lld",&n,&s);
	for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			sum+=arr[i];
			if(arr[i]<min)
				min=arr[i];
}
if(sum>s)
{
  long long int temp=0;
  for(long long int i=0;i<n;i++)
{
	temp+=(arr[i]-min);

}
if(temp<s)
{
while(temp<s)
{
temp+=n;
min--;
}
printf("%lld\n",min);
}
else
printf("%lld\n",min);
}
else if(sum==s)
printf("0\n");
else
printf("-1\n");

}