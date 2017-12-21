#include <stdio.h>

#include<string.h>

int main(void)
{

char s[20];

int len,i,flag=0;

scanf("%s",s);

len=strlen(s);

for(i=len;i>=0;i--)

{

	printf("%c",s[i]);

}

printf("\n");

for(i=len;i>=0;i--)

{

	flag=1;

	if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')

	{

		flag=0;

	}

	if(flag==1)

	{

	printf("%c",s[i]);
	}

}

return 0;

}
