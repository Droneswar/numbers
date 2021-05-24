#include<stdio.h>
int harshad(int num)
{
	int n,r=0,res=0;
	n=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res+r;
	}
	if(n%res)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	if(harshad(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
