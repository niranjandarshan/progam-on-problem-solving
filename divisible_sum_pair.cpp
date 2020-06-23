#include<stdio.h>
int main(){
   long int i,j,sum,a[1000],count=0,k,n;
   scanf("%ld %ld",&n,&k);
   for(i=0;i<n;i++){
       scanf("%ld",&a[i]);
   }
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if((a[i]+a[j])%k==0)
           count++;
       }
   }
   printf("%ld",count);
}
