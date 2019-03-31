#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int arr[n][2];
	for(int i=0;i<n;i++)
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	int i=1,j=0,count=0;
	while(j<n)
	{
		i+=((arr[j][0]-i)/x)*x;
		// printf("i %d\n",i );
		count+=(arr[j][1]-arr[j][0]+1);
		count+=(arr[j][0]-i);
		i=(arr[j][1]+1);
		// printf("i %d count %d\n",i,count );
		j++;
	}
	printf("%d\n",count );
}