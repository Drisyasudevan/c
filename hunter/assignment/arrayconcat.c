#include<stdio.h>
void main()
{
int a[],b[],c[];
int i,n1,n2;
int j,k;
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&n2);
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
j=k=0;
for(i=0;i<n1+n2;)
{
	if(j<n1&&k<n2)
	{
		if(a[j]<b[k])
        {
			c[i]=a[j];
			j++;
		}
		else
		{
    		c[i]=b[k];
			k++;
    	}
	i++;
	}
	else if(j==n1)
	{
		for(;i<n1+n2;)
		{
			c[i]=b[k];
			k++;
			i++;
		}
	}
	else
	{	for(;i<n1+n2;)
    	{
			c[i]=a[j];
			j++;
			i++;
        }
    }
}

for(i=0;i<n1+n2;i++)
{
printf("%d ",c[i]);
}
}
