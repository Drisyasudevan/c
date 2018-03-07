#include <stdio.h>


int main(void)
 {
int min,h,m,g,temp;

scanf("%d",&min);

temp=min;
if(min<60)

{

	h=0;

	m=min;

}

else

{

	h=min/60;

	g=h*60;

	m=temp-g;

}

printf("%d %d",h,m);

return 0;

}
