#include <stdio.h>
int main()
{
 int a[10];
 int i,j,temp,n;
 printf("Number of elements in an array\n");

 printf("Array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);	
  }
  for(i=0;i<n;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  		if(a[i]<a[j])
  		{
  			temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
  		}
  	}
  }
  printf("%d",a[0]);
 return 0;
}
