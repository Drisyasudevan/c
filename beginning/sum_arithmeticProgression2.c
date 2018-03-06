#include <stdio.h>


int main(void)
{


	int i,n,a,d,sum=0,temp;

	scanf("%d %d %d",&n,&a,&d);

	temp=n;

temp=a+(temp-1)*d;

sum=(n*(a+temp))/2;

	printf("%d",sum);

	return 0;

}
