#include <stdio.h>
#include <math.h>

int main()
{
  int n1,n2,i;
  scanf("%d %d",&n1,&n2);
  for(i=n1;i<=n2;i++)
  {
  	if(i%2==1)
  	{
  		printf("%d ",i);
  	}
  }

    return 0;
}