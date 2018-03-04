#include <stdio.h>
#include <math.h>

int main()
{
   int n,temp,rem,result=0;

    scanf("%d", &n);

    temp=n;

    while (temp!=0)
    {
        rem=temp%10;
        result += rem*rem*rem;
        temp/= 10;
    }

    if(result==n)
        printf("yes");
    else
        printf("no");
    return 0;
}