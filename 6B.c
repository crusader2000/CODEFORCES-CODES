#include<stdio.h>
int main()
{
	int n,m;
	char p;
	scanf("%d %d %c",&n,&m,&p);
	char s[103][103];
	int ans[103][103]={0};
	int x,y,count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%c",&s[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(j>=0 && j<n && i-1>=0 && i-1<m && s[i-1][j]!='.' && s[i][j+1]!=p && s[i][j]!=p)
				ans[i][j]=1;
			if(j-1>=0 && j-1<n && i>=0 && i<m && s[i][j-1]!='.' && s[i][j+1]!=p && s[i][j]!=p)
				ans[i][j]=1;
			if(j+1>=0 && j+1<n && i>=0 && i<m && s[i][j+1]!='.' && s[i][j+1]!=p && s[i][j]!=p)
				ans[i][j]=1;
		}
	for(int i=0;i<n;i++)
	{		for(int j=0;j<m;j++)
			printf("%d ",ans[i][j]);
//	printf("%d\n",count);
printf("\n");
	}
}
