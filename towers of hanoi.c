#include<stdio.h>
#include<stdlib.h>

void TOH(int n,char s,char d,char i)
{
	if(n==1)
	{
		printf("move 1 from %c to %c\n",s,d);
	}
	else
	{
		TOH(n-1,s,i,d);
		printf("move %d from %c to %c \n",n,s,d);
		TOH(n-1,i,d,s);
	}
}

void main()
{
	int n;
	printf("enter the number of disks\n");
	scanf("%d",&n);
	fflush(stdin);
	char a,b,c;
	scanf("%c",&a);
	fflush(stdin);
	scanf("%c",&b);
	fflush(stdin);
	scanf("%c",&c);
	TOH(n,a,b,c);
	
}
