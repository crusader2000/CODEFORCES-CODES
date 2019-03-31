#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	int n,arr[305][3];
	scanf("%d",&n);
	int count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
		int temp1=(arr[i][0]*x1+arr[i][1]*y1+arr[i][2]);
		int temp2=(arr[i][0]*x2+arr[i][1]*y2+arr[i][2]);
		if((temp1*temp2)<0)
			count++;
	}
	printf("%d\n",count );
}