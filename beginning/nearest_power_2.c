#include<stdio.h>
int nextPowerOf2(unsigned int n)
{
    unsigned int p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n) 
        p <<= 1;
     
    return p;
}
 int n;
scanf("%d",&n);
  printf("%d", nextPowerOf2(n));
  return 0;
}