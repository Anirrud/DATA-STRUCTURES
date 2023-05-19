#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter The Value Of Number = ");
	scanf("%d",&n);
	printf("The Even Number From 1 To Number : \n");
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
