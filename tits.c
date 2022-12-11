#include <stdio.h>

int i, j;
int final = 1;

int main (){  
    for (j = 9; j > 0; j = j - 3)
    {
       i = j / 3;
       while (i < j){
        printf("\n i is %d j is %d\n", i, j);
        j--;
        i = i + 1;
        final = final + 2*j;
       }
       printf("\nNew i = %d", i);
    }
    printf("\nfinal output: %d\n", final);
    return 0;
}