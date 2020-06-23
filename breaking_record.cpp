#include<stdio.h>
#include<math.h>
int main(){
    long int count=0,count1=0,i,large,small,m[1000],n;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
    scanf("%ld",&m[i]);
    }
    large=m[0];
    small=m[0];
    for(i=0;i<n;i++){
        if(large<m[i]){
            large=m[i];
            count++;
        }
        else {
            if(i<n)
        continue;
        }
       
    }
    for(i=0;i<n;i++){
         if(small>m[i]){
        small=m[i];
        count1++;
        }
        else {
        if(i<n)
        continue;
        }
    }
    printf("%ld %ld",count,count1);
}    

