#include<stdio.h>
#include<math.h>
int main(){
   long int i,sum=0,small,large,j,sum1=0,a[10],m[10];
    for(i=0;i<5;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=0;
        for(j=0;j<5;j++){
            sum=sum+a[j];


        }
        m[i]=sum-a[i];
        
    }

     small=m[0];
    for(i=0;i<5;i++){
        if(m[i]<small)
        small=m[i];
    }
    printf("%ld",small);

    large=m[0];
   
    for(i=0;i<5;i++){
        if(m[i]>large){
            large=m[i];
        }
       
    }
     printf(" ""%ld",large);
     
}
