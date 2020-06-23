#include<stdio.h>
int main()
{
int n=0,p=0,m;
scanf("%d",&n);
scanf("%d",&p);
m=(n/2)-(p/2);
if(m>p/2)
m=p/2;
printf("%d",m);
return 0;
}
