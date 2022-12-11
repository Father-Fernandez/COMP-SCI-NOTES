/*Notes*/
#include <stdio.h>


/*Factorial*/
int Factorial(int num){

    int factorial = 1;

    for(int i = num; i > 1; i--){

        factorial *= i;
    }
    return factorial;
}

/*Fibonacci*/
int Fibonacci (int n){
    if (n == 0  || n == 1){
        return n;
    }
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(){

/* Structs and Files*/
    struct thing
    {
        int ID;
        float Balance;
    };
    
    struct thing Andrew, Jamie, temp;
    int value1, value2;
    
    Jamie.ID = 1500;
    Jamie.Balance = 3000;

    Andrew.ID = 1200; 
    Andrew.Balance = 1000; 

    temp.ID = 0;
    temp.Balance = 0;

/*
    printf("Purchase 1 for Jamie: ");
    scanf("%f", &value1);
    printf("Purchase 2 Andrew: ");
    scanf("%f", &value2);
*/

    value1 = 788.00;
    value2 = 889.00;

    Jamie.Balance = Jamie.Balance - (value1 * 0.9);
    Andrew.Balance = Andrew.Balance - value2;

    printf("Jamie's balance is equal to %.2f\n Andrew's balance is equal to %.2f", Jamie.Balance, Andrew.Balance);

    /*Switching Values in a struct*/
    temp = Andrew;
    Andrew = Jamie;
    Jamie = temp;

    return 0;
}

