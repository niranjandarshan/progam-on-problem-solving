#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int x1,x2,v1,v2,i=0;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    while(1){
       if((x1=x1+v1) ==(x2=x2+v2)) {
        printf("YES");
        break;
        }
        
        if(x1>x2 && v1>v2 || x2>x1 && v2>v1 || v1==v2) {
        printf("NO");
        break;
        }
        
    }

}
