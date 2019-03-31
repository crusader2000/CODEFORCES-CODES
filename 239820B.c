#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	char s1[3006][15];
	char s2[3006][15];
	for(int i=0;i<m;i++)
		scanf("%s %s",s1[i],s2[i]);
	// for(int i=0;i<m;i++)
		// printf("%s %s\n",s1[i],s2[i]);
	for(int i=0;i<m;i++)
		if(strlen(s1[i])<=strlen(s2[i]))
			strcpy(s2[i],s1[i]);
		// for(int i=0;i<m;i++)
			// printf("%s %s\n",s1[i],s2[i]);
		for(int i=0;i<n;i++)
		{
			char s[12];int j;
			scanf("%s",s);
			for(j=0;strcmp(s,s1[j])!=0;j++);
				// printf("%d\n",j );
			printf("%s ",s2[j]);
		}
	}