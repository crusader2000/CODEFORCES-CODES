#include<stdio.h>
int main()
{
	int n,arr[1002]={0},ans=0,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	arr[n]=1001;
	int temp=0;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==(arr[i+1]-1))
		{
			temp=i;
			ans++;
		}
		else
		{
			if(max<ans)
				max=ans;
			ans=0;
		}	
	}
	if(max<ans)
		max=ans;
	if(max==(n-1))
	printf("%d\n",max);
	else
	printf("%d\n",max-1);

}
