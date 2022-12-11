#include <stdio.h>

int main ()
{
    float weight, height, BMI;
    char system;
   
    printf("Imperial(i) or Metric(m) system: ");
    scanf("%c", &system);
    if (system == 'm'){
        printf("Please enter your Height: ");
        scanf("%f", &height);
        printf("Please enter your weight: ");
        scanf("%f", &weight );
        BMI = (weight)/(height*height);
        printf("Your BMI is : %.1f", BMI);
    }
    else if (system == 'i') {
        printf("Please enter your Height: ");
        scanf("%f", &height);
        printf("Please enter your weight: ");
        scanf("%f", &weight );
        BMI = (weight * 703) /(height*height);
        printf("your BMI is : %.1f", BMI);
    
    } 
    if (BMI < 18.5){
        printf("you are underweight");
    } 
    else if (BMI > 18.5 and BMI < 24.9){
        printf("you are a normal and healthy weight");
    } 
    else if (BMI > 25 and BMI < 29.9){
        printf("you are Overweight");
    } 
    else if (BMI >= 30){
       printf("Your are obese");
    }
    
    return 0;
}