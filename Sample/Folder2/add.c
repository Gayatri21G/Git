#include<stdio.h>
#include<stdlib.h>

int add(int a,int b)
{
	int z=a+b;
	return z;
}

void main()
{
	int a,b,c;
	printf("Enter a and b:");
	scanf("%d %d",&a,&b);
	c=add(a,b);	
	printf("Addition is : %d",c);
}
