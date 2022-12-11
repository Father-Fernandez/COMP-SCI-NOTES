#include <stdio.h>
#include <stdlib.h>

int main(){

int player, computer;
printf("Pick one: scissors(0) rock(1) paper(2): ");
scanf("%d", &player);
computer = rand() % 3;
if (player + 1 == computer){
    printf("%d\n", player);
    printf("%d\n", computer);
    printf("You Lose!");
} 
else if (player - 1 < 0){
    printf("%d\n", player);
    printf("%d\n", computer);
    printf("You Win!");
}
else if (player - 1 == computer){
    printf("%d\n", player);
    printf("%d\n", computer);
    printf("You Win!");
}
else if (player == computer){
    printf("%d\n", player);
    printf("%d\n", computer);
    printf("Draw!");
}

    return 0;
}