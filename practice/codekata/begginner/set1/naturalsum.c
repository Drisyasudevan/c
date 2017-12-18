#include <stdio.h>
 
int main(void) {
int a,sum=0,i;
scanf("%d",&a);
i=1;
while(i<=a)
{
sum=sum+i;
i++;
}
printf("%d",sum);
return 0;
}
