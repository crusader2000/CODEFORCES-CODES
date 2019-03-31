#include<stdio.h>
int main()
{
	int a,b;
	char c,d;
	scanf("%c%d",&c,&a);
	scanf("%c%d",&d,&b);
	int count1=(int)d-(int)c;
	int count2=b-a;
	printf("%d",count1+(count2-count1));
/*	if(count1>0)
	{
		if(count2>=0)
		{
			while(count1>=0) //&& count2>=0)
			{
				printf("RU\n");
				count1--;
				count2--;
			}
			while(count2>=0)
			{	printf("R\n");
					count2--;
		}
		}
		else
		{
			while(count1>=0) //&& count2<=0)
			{	printf("RD\n");
				count1--;
				count2++;
			}
			while(count2<=0)
			{printf("R\n");
		                 	count2++;
			}

		}
	}
	else if(count1<0)
	{
		if(count2>=0)
		{
			while(count1<=0) //&&count>=0)
			{
				printf("LR\n");
					count1++;
				count2--;
			}
			while(count2>=0)
			{
				printf("L\n");
				count2--;
			}
		}
		else
		{

			while(count1<=0) //&&count>=0)
			{
				printf("LD\n");
					count1++;
				count2++;
			}
			while(count2<0)
			{
				printf("L\n");
				count2++;
		}
		}
	}
	
		else
		{
			if(count2>0)
			{while(count2)
					printf("U");
			count2--;
			}
			else
			{
				while(count2<0)
					printf("D");
				count2++;
			}
		}*/
}
