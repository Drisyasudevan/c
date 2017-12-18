#include <stdio.h>

int main(void) {
char ch;
scanf("%c",&ch);
int b=(int)ch;
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("vowel");
else
{
	if((b>=65&&b<=90)||(b>=97&&b<=122))
		printf("alphabet");
	else
		printf("consonant");
}
return 0;
}
