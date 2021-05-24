#include<stdio.h>
#include<math.h>
int reverse(int num)
{
	int r=0,res=0;
	while(num)
	{
		r=num%10;
		num=num/10;
		res=res*10+r;
	}
	return res;
}
int disarium(int num)
{
	int r=0,i=1,n,res=0;
	n=num;
	while(n)
	{
		r=n%10;
		n=n/10;
		res=res+pow(r,i);
		i+=1;
	}
	return res==reverse(num);
	
}
int main()
{
	int num,res;
	scanf("%d",&num);
	num=reverse(num);
	if(disarium(num))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
