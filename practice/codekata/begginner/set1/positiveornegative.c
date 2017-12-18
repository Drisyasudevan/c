#include <stdio.h>

int main(void) {
	double a;
	scanf("%lf",&a);
	if(a<0.0)
		printf("negative number");
	else if(a>0.0)
		printf("positive number");
	else
		printf("entered number is 0");
	return 0;
}
