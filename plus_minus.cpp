#include <math.h>
#include <stdio.h>


int main(){
   int n,i,a[100];
   float count=0,count1=0,count2=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);

   }
   for(i=0;i<n;i++){
       if(a[i]>0){
           count++;
       }
       else if(a[i]<0){
           count1++;
       }
       else{
           count2++;
       }
   }
  
   printf("%f",count/n);
   printf("\n %f",count1/n);
   printf("\n %f",count2/n);

}
