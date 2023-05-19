#include <stdio.h>
int main() 
{
	char a[5][100];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter name = ");
		scanf("%s",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("%s\n",a[i]);
	}
	return 0;
}
