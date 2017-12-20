#include<stdio.h>
#include<string.h>
void main()
{
char str[10];
int i,j,count,len;
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len;i++)
{
count=1;
if(str[i]=='$')
continue;
for(j=i+1;j<len;j++)
{
if(str[i]==str[j])
{
count++;
str[j]='$';
}
}
printf("%c - %d\t",str[i],count);
}
}
