/*Notes*/
#include <stdio.h>
#include <string.h>

/*Factorial*/
int Factorial(int num){
    
    // takes an input #, and sets factorial to 1
    int factorial = 1;

    // sets i to the input # and if i is greater than 1, we decrease i
    for(int i = num; i > 1; i--){

        /* the factorial will be equal to 1 multiplied by the descending
            values of i, example 1*9*8*...*/
        factorial *= i;
    }
    return factorial;
}


/*Fibonacci
int Fibonacci (int n){
    if (n == 0  || n == 1){
        return n;
    }
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
*/

// initializing sorting function, pass in array and its size
void sort(int array[], int size){

    //nested for loop to go through the elements
    for(int q = 0; q < size - 1; q++){
        for(int p = 0; p < size - 1; p++){

            //if element of the left is less than the element on the right, swap them "less than" sign can be changed
            if(array[p] < array[p+1]){
                int temp = array[p];
                array[p] = array[p+1];
                array[p+1] = temp;
            }
        }

    }
}

void printnum(int array[], int size){

    for(int i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
}

int main(){

    //declerations 
    int array[] = {6, 41, 6, 1, 7, 99, 0, 12, 23};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printnum(array, size);

    printf("\n%d", Factorial(9));

/* Structs and Files
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
*/

    return 0;
}

