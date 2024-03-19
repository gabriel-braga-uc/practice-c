#include <stdio.h>
int main(){
    int cycles, count;
    float monthly_base, dividend, funds;
    monthly_base = 10; /* Cyclic apport/injection of funds */
    funds = 0; /* Amount of starting funds */
    cycles = 10; /* Number of cycles. Conventionally pre set as 1 cycle being 1 month */
    count = 0; /* Cycle control */
    while(cycles != 0){
        dividend = funds/100; /* Dividend yield per cycle. Pre set to 1% of funds */
        funds += dividend;
        count ++;
        printf("\n\nMonth: %d", count);
        funds += monthly_base;
        printf("\nMonthly Yield: %f", dividend);
        printf("\nFunds: %f", funds);
        dividend = 0;
        cycles --;
    }
    return(0);
}