#include <stdio.h>


int main(void)
 {

	int i,n,a,d,sum=0;

	scanf("%d %d %d",&n,&a,&d);

	for(i=a;i<=n;i+d);

	{

		sum=sum+i;

	}

	printf("%d",sum);

	return 0;

}