#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter value  =");
	scanf("%d",&n);
	
	
	for(i=1;i<=10;i++){
		printf("%d x %d =%d\n",n,i,i*n);
	}
}
