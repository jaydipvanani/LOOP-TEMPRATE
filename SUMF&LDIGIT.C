#include<stdio.h>

main()
{
	int n,last,first,sum=0;
	
	printf("Enter value  =");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>10)
	{

	n=n/10;
	
	}
	first=n;
	sum=first+last;
	printf("FIRST NUMBER AND LAST NUMBER SUM IS = %d",sum);	
}
