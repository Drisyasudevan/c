#include <stdio.h>


int main(void) 
{

int n,m,p=1;

scanf("%d %d",&n,&m);


while(m!=0)

{

	p=p*n;

	m--;

}



printf("%d",p);

	return 0;

}
