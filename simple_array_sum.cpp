#include <math.h>

#include <stdio.h>

int main(){
    int i,n,sum=0,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);

}
