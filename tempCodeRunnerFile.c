
#include <stdio.h>

int main(void){

  int dollar_amount;
  int twentys, tens, fives, singles;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);

  twentys = dollar_amount / 20;
  dollar_amount = dollar_amount - (twentys * 20);

  tens = dollar_amount / 10;
  dollar_amount = dollar_amount - (tens * 10);

  fives = dollar_amount / 5;
  dollar_amount = dollar_amount - (fives * 5);

  singles = dollar_amount;

  printf("$20 bills: %d\n", twentys);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", singles);

  return 0;

}