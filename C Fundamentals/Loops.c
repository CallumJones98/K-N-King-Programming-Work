// while (expression) statement

/*

  i = 1;

  while (i < n){
    i = i * 2;
    }

*/

#include <stdio.h>
int main(void){

  int i = 10;

  printf("Countdown begins...");

  while (i > 0){
    printf("T minus %d and counting \n", i);
    i--;
  }

  printf("Liftoff! \n");

  return 0;
}

#include <stdio.h>
int main(void){

  int n;
  int sum = 0;

  printf("This program will sum a series of integers. \n");
  printf("Enter integers (0) to exit: ");

  scanf("%d", &n);
  while (n != 0){
    sum += n;
    scanf("%d", &n);
  }

  printf("The sum is %d \n", sum);

  return 0;

}

// Do statement 

// do statement while (expression)

#include <stdio.h>
int main(void){

  int i = 10;

  printf("Countdown begins... \n");

  do {
    printf("T minus %d and counting \n", i);
    --i;
  } while (i > 0);

  printf("Liftoff! \n");

  return 0;

}


// for statement 

// for (expression 1; expression 2; expression 3) statement;

#include <stdio.h>
int main(void){

  int i;

  printf("Countdown begins... \n");

  for (i = 10; i > 0; i--){
    printf("T minus %d and counting... \n", i);
  }

  printf("Takeoff!");

  return 0;

}

// you can have multiple expression in a for statement (seperated by a comma)

// (expression 1, expression 2; expression 3)

#include <stdio.h>
int main(void){

  int user_num, count, sum;

  printf("Enter number: ");
  scanf("%d", &user_num);

  for (sum = 0, count = 1; count <= user_num; count++){
    sum += count;
  }

  printf("Sum of numbers up to %d = %d \n", user_num, sum);

  return 0;

}


// For statement with a break statement

#include <stdio.h>
int main(void){

  int num;

  for (;;){
    printf("Enter a number: (0 to stop): ");
    scanf("%d", &num);
    if (num == 0){
      break;
    }
    printf("%d cubed is %d \n", num, num * num * num);
  }

  return 0;

}

// go to statement

#include <stdio.h>

int main(void) {
  
  int n = 17;
  int d; 

  for (d = 2; d < n; d++) {
    if (n % d == 0) {
      goto done; 
    }
  }
  
done: 
  if (d < n) {
    printf("%d is divisible by %d \n", n, d);
  } else {
    printf("%d is prime \n", n);
  }

  return 0;
}

// Exercises

// 6.1

#include <stdio.h>
int main(void){

  float input_num;
  float highest_num = 0;

  printf("Enter a number: ");
  scanf("%f", &input_num);


  while (input_num > 0){
    if (input_num > highest_num){
      highest_num = input_num;
    }
  printf("Enter a number: ");
  scanf("%f", &input_num);
  }

  printf("The largest number entered was: %.2f \n", highest_num);

  return 0;

}


// 6.2 

#include <stdio.h>
int main(void){

  int num_one, num_two, n, greater_num, remainder;

  printf("Enter two integers: ");
  scanf("%d%d", &num_one, &num_two);

  if (num_one > num_two){
    n = num_two;
    greater_num = num_one;
  }
  else {
    n = num_one;
    greater_num = num_two;
  }

  remainder = greater_num % n;
  
  while(remainder != 0){
    greater_num = n;
    n = remainder;
    remainder = greater_num % n;
  }

  printf("The GCD is %d \n", n);
  
  return 0;

}


// 5.3 

#include <stdio.h>
int main(void){

  int numerator, denominator;
  int n, greater_num, remainder, gcd;

  printf("Enter a fraction (n/d): ");
  scanf("%d/%d", &numerator, &denominator);

  // Find GCD

  if (numerator > denominator){
    greater_num = numerator;
    n = denominator;
  } else {
    greater_num = denominator;
    n = numerator;
  }

  remainder = greater_num % n;

  while(remainder != 0){
    greater_num = n;
    n = remainder;
    remainder = greater_num % n;
  }

  gcd = n;

  // divide numerator and denominator by CGD

  printf("In lowest terms: %d/%d \n", numerator / gcd, denominator / gcd);

  return 0;

}


// 5.5

#include <stdio.h>
int main(void){

  int input_num, new_val;
  int count = 0;

  printf("Enter number: ");
  scanf("%d", &input_num);

  while (input_num != 0){
    new_val = input_num / 10;
    count += 1;
    input_num = new_val;
  }

  printf("Length of number: %d \n", count);

  return 0;

}

// 5.6 

#include <stdio.h>
int main(void){

  int input_num;
  int count = 1;

  printf("Enter number: ");
  scanf("%d", &input_num);

  while (input_num != count && (count * count) <= input_num){
    if ((count * count) % 2 == 0){
      printf("%d \n", count * count);
    }
  count += 1;
  }

  return 0;

}


// 5.8

#include <stdio.h>
int main(void){

  float balance, payment, new_balance;
  float interest_rate = 0.12 / 12;
  int count;

  printf("Enter balance: ");
  scanf("%f", &balance);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter how many months of payments to be made: ");
  scanf("%d", &count);

  int total_months = count;

  while (count > 0) {
        new_balance = balance - payment;
        float interest_added = new_balance * interest_rate;
        balance = new_balance + interest_added;

        printf("Month %d: New balance: %.2f \n", (total_months - count + 1), balance);
        
        count -= 1; // Reduces the count until it hits 0
    }

    return 0;

}

// 5.10 

#include <stdio.h>
int main(void){

  int day, month, year;
  int earliest_day, earliest_month, earliest_year;

  printf("Enter a date (dd/mm/yy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  earliest_day = day;
  earliest_month = month;
  earliest_year = year;

  while (1) { 
    printf("Enter a date (mm/dd/yy), enter 0/0/0 to stop: ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (day == 0 && month == 0 && year == 0) {
        break;
    }

    if (year < earliest_year || 
       (year == earliest_year && month < earliest_month) || 
       (year == earliest_year && month == earliest_month && day < earliest_day)) {
        
        earliest_day = day;
        earliest_month = month;
        earliest_year = year;
    }
  }

  printf("Earliest date: %d/%d/%d \n", earliest_day, earliest_month, earliest_year);

  return 0;

}

