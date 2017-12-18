#include <stdio.h>

int main(void) {
	int num,i;
	scanf("%d",&num);
	i=0;
	while(num!=0)
	{
		i++;
		num=num/10;
	}
	printf("%d",i);
	return 0;
}
