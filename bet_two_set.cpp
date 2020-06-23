#include<stdio.h>
int main() {
    int n,t,flag1,flag2,j,total=0,i;
    int m;
    scanf("%i %i", &n, &m);
    int a[n],b[m];
    for (i = 0; i < n; i++) 
       scanf("%i",&a[i]);
    
    for (i = 0; i < m; i++) 
       scanf("%i",&b[i]);
    
    for(t=n;t<=b[0];t++)
    {
        flag1=0;
        flag2=0;
        for(i=0;i<n;i++)
        {
            if(t%a[i] !=0)
            {
                flag1=1;
                break;
            }
        }
        if(flag1 == 0)
        {
            for(j=0;j<m;j++)
            {
                if(b[j]%t !=0)
                {
                    flag2=1;
                    break;
                }
            }
        }
        if(flag1 == 0 && flag2 == 0)
            total++;
    }
    printf("%d\n", total);
    return 0;
}
