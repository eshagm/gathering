#include<stdio.h>

avg (int n[],int n1)
{
	int i,sum=0;
	for(i=0;i<=n1;i++)
	{
		sum=sum+n[i];
	}
	printf("sum =%d",sum);
}
main()
{
	int a[100];
	int n,i,sum=0;	
	printf("enter array element =");
	scanf("%d",&n);
	printf("sum array element =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	avg(a,n);
}

