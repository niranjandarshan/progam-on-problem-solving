#include<stdio.h>
#include<string.h>
int main()
{
    int hh, mm, ss;
    char a[3];
   
    scanf("%d:%d:%d%s", &hh,&mm,&ss,&a);
    
    if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hh != 12))
        {
            hh = hh + 12;
            if(hh==24)
            hh=12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {if(hh==12)
        hh=0;
            else
            hh = hh;
        }
        
        printf("%02d:%02d:%02d", hh, mm, ss);
        
    }
   
    return 0;
}
