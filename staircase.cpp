#include<stdio.h>
int main()
{
    int n, i, j, s = 0, pattern = 0;

    scanf("%d", &n);
 /*
 No of rows of pattern 
 */
    for(i = 0; i < n; i++)
    {
        s = n - (i+1);
        for(j = 0; j < s; j++)
        {
            printf(" ");
        }
  
  /*We are going to print no. of space minus 1 each time */

        pattern = i + 1;
  
        for(j = 0; j < pattern; j++)
        {
            printf("#");
        }
  
  /*
  Printing the Hash("#") pattern
  */

        printf("\n");
    }
}
