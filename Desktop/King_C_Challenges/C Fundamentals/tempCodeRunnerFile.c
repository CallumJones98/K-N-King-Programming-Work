#include <stdio.h>

int main(void){

  float loan_amount, interest_rate, monthly_payment;
  
  printf("Enter loan amount: ");
  scanf("%f", &loan_amount);
  printf("Interest Rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  float monthly_rate = (interest_rate / 100.0) / 12.0;
  float first_interest_added = loan_amount * monthly_rate;
  float first_balance = (loan_amount + first_interest_added) - monthly_payment;

  printf("Balance remaining after first payment: %.2f \n", first_balance);

  float second_interest_added = first_balance * monthly_rate;
  float second_balance = (first_balance + second_interest_added) - monthly_payment;

  printf("Balance remaining after second payment: %.2f \n", second_balance); 

  float third_interest_added = second_balance * monthly_rate;
  float third_balance = (second_balance + third_interest_added) - monthly_payment;

  printf("Balance remaining after third payment: %.2f \n", third_balance);

  return 0;
}