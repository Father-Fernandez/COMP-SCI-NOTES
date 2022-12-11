#include <stdio.h>

int main(){
    float cost, first5, remainder, ArchitectFee;

    cost = 800000.00;
    
    if (cost > 5000.00)
    {
        first5 = 5000.00 * 0.08;
        remainder = cost - 5000.00;
        if (remainder <= 80000.00){
            remainder *= 0.03;
        }
        else{
            remainder *= 0.025;
        }
        ArchitectFee = remainder + first5;
        printf("The Total Architect's fee is $%.2f", ArchitectFee);
    }
    else{
        printf("The Total Architect's fee is $%.2f", cost*0.08);
    }
    return 0;
}
