
#include<stdio.h>

int main(void)

{

int h1,m1,h2,m2,dif;

scanf("%d %d",&h1,&m1);

scanf("%d %d",&h2,&m2);

h1=h1*60+m1;

h2=h2*60+m2;

dif=h2-h1;

if(dif>60)

{

h1=dif/60;

h2=dif%60;

printf("time difference is %d hour %d minutes",h1,h2);

}

else

{

printf("time difference %d minutes",dif);

}

return 0;

}