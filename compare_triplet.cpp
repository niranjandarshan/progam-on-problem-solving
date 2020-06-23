
#include <math.h>

#include <stdio.h>

int main(){
    int a[3],b[3],sum=0,sum1=0,i,c[i];
    
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);

    }
    for(i=0;i<3;i++){
        if(a[i]<b[i]){
        sum=sum+1;
       }
        else if(a[i]>b[i]){
        sum1=sum1+1;
       
        }
         
        
        

       
    }
    printf("%d", sum1);
    printf(" ");
    printf("%d",sum);
   
        
    
   
}
