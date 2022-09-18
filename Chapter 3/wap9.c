// Bill generator

# include <stdio.h>

int main(){
    float BASE_RATE = 100.00, bill;
    int num_calls;
    printf("Number of calls in this month: ");
    scanf("%d", &num_calls);

    if (num_calls >= 501)
    bill = BASE_RATE + BASE_RATE * 1.20;
    else if (num_calls >= 201)
    bill = BASE_RATE + BASE_RATE * 1.00;
    else if (num_calls >= 101)
    bill = BASE_RATE + BASE_RATE * 1.00;
    else 
    bill = BASE_RATE;
    
    printf("Your total bill of this month: %.2f\n", bill);
}