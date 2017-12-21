#include <stdio.h>


int main(void) 
{

int a,i=1,j=1;

scanf("%d",&a);

if(a!=0)

{

while(j<=40)

{

i=i*2;

if(a==i)

{

	printf("Yes");

	break;

}

if(i>a)

{
	printf("No");

	break;

}

}

j++;

}

return 0;

}
