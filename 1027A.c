#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char s[102];
		scanf("%d",&n);
		scanf("%s",s);
		int i;
		for(i=0;i<n/2;i++)
		{
			 if((char)((int)s[i]+1)==(char)((int)s[n-i-1]+1))
				continue;
			 if((char)((int)s[i]-1)==(char)((int)s[n-i-1]+1))
				continue;
			 if((char)((int)s[i]-1)==(char)((int)s[n-i-1]-1))
				continue;
			 if((char)((int)s[i]+1)==(char)((int)s[n-i-1]-1))
				continue;
			else
				break;
		}
		if(i==n/2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
