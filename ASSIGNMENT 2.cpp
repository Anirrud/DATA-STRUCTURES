#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter First Number  = ");
	scanf("%d",&a);
	printf("Enter Second Number  = ");
	scanf("%d",&b);
	printf("Enter Third Number  = ");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		printf("The Biggest Number Is %d",a);
	}
	else if(b>a&&b>c)
	{
		printf("The Biggest Number Is %d",b);
	}
	else
	{
		printf("The Biggest Number Is %d",c);
	}
}
