#include <stdio.h>


int main(void)
 {

int n,k,a[50],sum=0,i;

scanf("%d %d",&n,&k);

for(i=1;i<=n;i++)

{

	a[i]=i;

	printf("%d ",a[i]);

}

for(i=1;i<=k;i++)

{

	sum=sum+i;

}

printf("\n%d",sum);

	return 0;

}
