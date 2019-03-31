#include <stdio.h>

void recur(int coloumn)
{
	if(coloumn)
	{
		if(coloumn%26==0)
		{	    
			recur((coloumn/26)-1);
			printf("Z");
		}
		else
		{
			recur(coloumn/26);
			if(coloumn%26!=0)
				printf("%c",(coloumn)%26+64);
			else
				printf("%c",(coloumn)%26+65);
		}
	}
}
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[2000000];
		scanf("%s",s);
int flag=0;
		if(s[0]=='R' && s[1]>'0' && s[1]<='9')
		{
			int t=2;
			while(s[t]!='\0')
			{
				if(s[t]=='C')
					flag=1;
				t++;
			}
		}
		if(flag)
		{
			int i=2,row=s[1]-'0',temp=1;
			while(s[i]!='C')
			{
				row*=10;
				row+=(s[i]-'0');
				i++;
			}
			i++;
			int coloumn=0;
			while(s[i]!='\0')
			{
				coloumn*=10;
				coloumn+=(s[i]-'0');
				i++;
			}
			recur(coloumn);
			printf("%d\n",row);
		}
		else
		{
			int i=1;
			int coloumn=s[0]-'A'+1;
			while(s[i]>='A')
			{
				coloumn*=26;
				coloumn+=s[i]-'A'+1;
				i++;
			}
			printf("R");
			while(s[i]!='\0')
			{
				printf("%c",s[i]);
				i++;
			}
			printf("C%d\n",coloumn);
		}
	}
	return 0;
}
