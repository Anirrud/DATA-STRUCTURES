#include<stdio.h>
#include<conio.h>
int binarys(int[],int,int);
main()
{
	int a[10],n,k,i,pos;
	printf("Enter the element n:");
	scanf("%d",&n);
	printf("Enter the array element:");
	for(i=0; i<n ;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search key:");
	scanf("%d",&k);
	pos=binarys(a,n,k);
	if(pos!= -1)
	{
	printf("available in list ");
}
else
{
	printf("not available in the list ");
}
getch();
return 0;
}
int binarys(int a[],int n,int k)
{
int f,l,m;
f=0;l=n-1;
while(l>=f)
{
	m=(f+l)/2;
	if(k<a[m])
	l=m-1;
	else if(k>a[m])
	l=m+1;
	else if(k==a[m])
	return m;
}
return -1;
}
