#include<stdio.h>
int main(){
    int n,i,a[1000],dt,m,temp,count=0,sum=0,j;
    scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d%d",&dt,&m);
for(i=0;i<n;i++){
sum=0;
temp=0;
for(j=i;j<n;j++){
if(temp<m){
sum=sum+a[j];
temp++;
}
}
if(sum==dt){
count++;
}
}
 printf("%d",count);
return 0;

}
