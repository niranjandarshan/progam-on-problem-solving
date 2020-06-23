#include<stdio.h>
#include<math.h>
int main(){
    int i,j,sum=0,sum1=0,diff,n,a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    for(i=0;i<n;i++){
        sum1=sum1+a[n-i-1][i];
    }
    if(sum1>sum){
        diff=sum1-sum;
        printf("%d",diff);
    }
    else if(sum>sum1){
        diff=sum-sum1;
        printf("%d",diff);

    }
    else if(sum==sum1)
    printf("0");
}
