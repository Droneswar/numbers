#include<stdio.h>
void pronic(int num)
{
	int r=0,j;
	for(j=1;j*j<=num;j++)
	{
		if(num%j==0)
		{
			if(j+1==num/j)
			{
				printf("True\n");
				return ;
			}
		}
	}
	printf("False\n");
	return ;
}
int main()
{
	int n,num,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		pronic(num);
	}
	return 0;
}

