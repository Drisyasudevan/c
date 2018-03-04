#include <stdio.h>
#include <math.h>

int main()
{
  int a[30],n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	a[i]=i;
  	printf("%d ",a[i]);
  }

    return 0;
}