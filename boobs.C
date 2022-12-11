#include <stdio.h>

int main ()
{ 
    int a,b;
    
    for(a = 2; a>=1; a--){
        for(b = 1; b <= 58 - a; b++){
            printf(" ");
        }
        for(b=1; b<=a; b++){
            printf("%d", b);
        }
        printf("\n");
    }
    printf("END\n");
    
}
