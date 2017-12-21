#include <stdio.h>

#include<string.h>

int main(void)
 {

char a[20];

int i,j,l,g,len;

scanf("%s",&a);

len=strlen(a);

j=0;

g=0;

l=0;

for(i=0;i<len;i++)

{

	int b=(int)a[i];

	if((b>=65&&b<=90)||(b>=97&&b<=122))

	{

		j++;

	}

	else if(a[i]>='0' && a[i]<='9')

        {

            l++;

        }

        else

        {
 
       	g++;

        }

}

printf("alpha=%d",j);


printf("numbers=%d",l);

printf("other characters=%d",g);

return 0;

}
