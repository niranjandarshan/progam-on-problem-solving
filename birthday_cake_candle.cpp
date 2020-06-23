#include<stdio.h>
#include<math.h>
int main(){
    long long  i,count=0,a[100000],n,large;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    large=a[0];
    for(i=0;i<n;i++){
        if(a[i]>large){
            large=a[i];
            count=1;
        }
        else if(a[i]==large)
        count++;
    }
    printf("%lld",count);
}
