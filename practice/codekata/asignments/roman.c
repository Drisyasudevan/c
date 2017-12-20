#include<string.h>
#include<stdio.h>
int main(void)
{
char roman[10];
int a[10],i,j,b,sum=0;
scanf("%s",&roman);
for(i=0;i<strlen(roman);i++)
{
	if(roman[i]=='i'||roman[i]=='I'){
		b=1;
	}
	else if(roman[i]=='v'||roman[i]=='V'){
		b=2;
	}
	else{
		b=3;
	}
switch(b)
{
case 1:a[i]=1;
	 break;
case 2:a[i]=5;
	 break;
case 3:a[i]=10;
	 break;
}
}
sum=a[strlen(roman)-1];
for(j=strlen(roman)-1;j>0;j--)
{
if(a[j]>a[j-1])
{
sum-=a[j-1];
}
else
{
sum+=a[j-1];
}
}
printf("%d",sum);
return 0;
}