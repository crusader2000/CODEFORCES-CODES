#include<stdio.h>
long long int n,arr[1005][1005],min=900000000,ans=0,visitedarr[1005][1005],ansarr[1003][1003];
void func(long long int i,long long int j,long long int product)
{
	if(i==(n-1) && j==(n-1))
	{
		long long int temp=product*arr[i][j],count=0;
		//printf("%lld\n",temp);
		while((temp%10)==0)
		{
			count++;
			temp/=10;
		}
		//printf("count %lld\n",count);
		if(count<min)
		{
			min=count;
			ans=product*arr[i][j];
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
					ansarr[i][j]=visitedarr[i][j];
		}
	
	//printf("min %lld count %d\n",min,count);
	//getchar();
	}
	else
	{
		//printf("%lld %d\n",i,j);
		visitedarr[i][j]=1;
		if((i+1)<n && j<n )
			func(i+1,j,product*arr[i][j]);
		if(i<n && (j+1)<n )
			func(i,j+1,product*arr[i][j]);
		visitedarr[i][j]=0;
	}
}
int main()
{
	scanf("%lld",&n);
	for(long long int i=0;i<n;i++)
		for(long long int j=0;j<n;j++)
			scanf("%lld",&arr[i][j]);
	func(0,0,1);
	ansarr[n-1][n-1]=1;	
/*	for(long long int i=0;i<n;i++)
	{	for(long long int j=0;j<n;j++)
		printf("%lld ",ansarr[i][j]);
		printf("\n");
	}*/
	printf("%lld\n",min);
	long long int i=0,j=0;
	while(i!=n-1 || j!=n-1)
	{
		if(ansarr[i+1][j]==1)
		{
			printf("D");
			i++;
		}
		if(ansarr[i][j+1]==1)
		{
			printf("R");
			j++;
		}
	}
	printf("\n");
}
