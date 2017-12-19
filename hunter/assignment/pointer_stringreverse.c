#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *s;
int len;
gets(s);
len=strlen(s);
for(i=len;i>=0;i--)
{
printf("%c",*(s+i));
}
}
