// Printf function
// printf(string, expression 1, expression2);

// information followed by % character specifies the value type


/*

int x = 123;

printf("%4d", x); // This will return []123 [], meaning white space as it is right justified

printf("%-4d", x); // This will return 123[], meaning white space after the value, therefore left justfified

*/

// Using printf to format numbers

#include <stdio.h>

int main(void){
  
  int i;
  float x;

  i = 40;
  x = 839.21;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  return 0;

}

/* Output:

|40|   40|40   |  040|
|   839.210| 8.392e+02|839.21    |

*/ 

// Scanf function

// Programming Projects

// 3.1

#include <stdio.h>

int main(void){

  int mm, dd, yyyy;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &mm, &dd, &yyyy);

  printf("You entered the date %d%02d%02d \n", yyyy, mm, dd);

  return 0;

}

// 3.2

#include <stdio.h>

int main(void){

  int item_num, month, day, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$%.2f\t%02d/%02d/%d\n", item_num, unit_price, month, day, year);

  return 0;

}

// 3.3

#include <stdio.h>
int main(void){

  int gs1, group_identifier, publisher_code, item_num, check_digit;
  
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group_identifier, &publisher_code, &item_num, &check_digit);

  printf("GS1 prefix: %d\n", gs1);
  printf("Group Identifier: %d\n", group_identifier);
  printf("Publisher Code: %d\n", publisher_code);
  printf("Item Number: %d\n", item_num);
  printf("Check Digit: %d\n", check_digit);
  
  return 0;

}

// 3.4

#include <stdio.h>

int main(void){

  int area_code, exchange_code, line_number;

  printf("Enter phone number [(xxx) xxx-xxx]: ");
  scanf("(%3d)%d-%d", &area_code, &exchange_code, &line_number);

  printf("You entered %3d.%3d.%4d\n", area_code, exchange_code,line_number);

  return 0;

}

// 3.5

#include <stdio.h>

int main(void){

  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
  int row_one_sum, row_two_sum, row_three_sum, row_four_sum;
  int col_one_sum, col_two_sum, col_three_sum, col_four_sum;
  int diag_one_sum, diag_two_sum;

  printf("Rnter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

  printf("%d\t%d\t%d\t%d \n", n1, n2, n3, n4);
  printf("%d\t%d\t%d\t%d \n", n5, n6, n7, n8);
  printf("%d\t%d\t%d\t%d \n", n9, n10, n11, n12);
  printf("%d\t%d\t%d\t%d \n", n13, n14, n15, n16);

  row_one_sum = n1 + n2 + n3 + n4;
  row_two_sum = n5 + n6 + n7 + n8;
  row_three_sum = n9 + n10 + n11 + n12;
  row_four_sum = n13 + n14 + n15 + n16;

  col_one_sum = n1 + n5 + n9 + n13;
  col_two_sum = n2 + n6 + n10 + n14;
  col_three_sum = n3 + n7 + n11 + n15;
  col_four_sum = n4 + n8 + n12 + n16;

  diag_one_sum = n1 + n6 + n11 + n16;
  diag_two_sum = n4 + n7 + n10 + n13;

  printf("Row sums: %d %d %d %d \n", row_one_sum, row_two_sum, row_three_sum, row_four_sum);
  printf("Column sum: %d %d %d %d \n", col_one_sum, col_two_sum, col_three_sum, col_four_sum);
  printf("Diagonal sums: %d %d \n", diag_one_sum, diag_two_sum);

  return 0;

}