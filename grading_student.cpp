#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int grade; 
        float go;
        scanf("%d",&grade);
        go = (float)grade/5;
        go = ceil(go);
        go = go*5;
        //printf("%f\n",go);
        if(grade >= 38){
            if(go - grade < 3){
                grade = (int)go;
            }
        }

        printf("%d\n",grade);

    }
    return 0;
}
