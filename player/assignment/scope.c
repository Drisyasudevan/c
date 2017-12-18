#include<stdio.h>
int j=1;
int main(void)
{
int i=10;
printf("Global variable is %d\n",j);
printf("Local variable is %d\n",i);
glob();
}
void glob(){
printf("Global variable is %d ",j);
return 0;
}

