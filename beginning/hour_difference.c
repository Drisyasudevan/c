#include <stdio.h>


int main(void)
 {

int h1,m1,h2,m2,h3,m3;

scanf("%d %d",&h1,&m1);

scanf("%d %d",&h2,&m2);

h3=h2-h1;

m3=m2-m1;

if(h3<0)

{

	h3=abs(h3);

}

if(m3<0)

{

	m3=abs(m3);

}

printf("%d %d",h3,m3);

return 0;

}
