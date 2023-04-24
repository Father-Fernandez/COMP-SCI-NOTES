#include <stdio.h>

int amount_grades, grades;
char Mark;
float totalGrade, finalAverage;

int main(){
    printf("How many grades do you want to enter?: ");
    scanf ("%d", amount_grades);

    for (int i = 0; i < amount_grades; i++){
        printf("Enter Grade: ");
        scanf ("%d", grades);
        totalGrade = totalGrade + grades;
        finalAverage = totalGrade / amount_grades;
    }

    if (finalAverage >= 85){
        Mark = 'A';
    }
    else if (finalAverage < 85 & finalAverage >= 75){
        Mark = 'B';
    }
    else if (finalAverage < 75 & finalAverage >= 65){
        Mark = 'C';
    }
    else if (finalAverage < 65 & finalAverage >= 55){
        Mark = 'D';
    }
    else 
        Mark = 'F';

    printf("The student's average was", finalAverage, "and their letter grade was", Mark);
    return 0;
}