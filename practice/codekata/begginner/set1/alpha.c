#include <stdio.h>

int main(void) {
char ch;
scanf("%c",&ch);
int b=(int)ch;

	if((b>=65&&b<=90)||(b>=97&&b<=122))
		printf("alphabet");
	else
		printf("not an alphabet");

return 0;
}
