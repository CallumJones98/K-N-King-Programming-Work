// Selection statements - if and switch 
// Iteration statements - while, do and for
// Jump statements - break, continue, goto

// Comparison operator like i < j yields an integer (0 is False and 1 is True)
/*
  Relational operators are left associative:

  i < j < k

  means:

  (i < j) < k 

  to run i < j < k:

  i < j && j < k;

*/

/*
  Equality operators:
   i == j (i is equal to j)
   i != j (i is not equal to j)
*/

/*
  Logical operators:

  ! (logical negation)
  && (and)
  || (or)

*/

/* 
  Challenges:

  i > 0 && ++j > 0;

  if i > 0 is False then the right association is not carried out meaning that j is not incremented. An alternative:

  ++j > 0 && i > 0;

*/

// if statement: if (expression) statement

/*
  in an if statement the brackets () around the expression are mandatory

  if (input_num == max_num)
    input_num = max_num;
*/

/* 
  You can use compound statements with an if statement:

  if (line_num == max_lines){
    line_num = 0;
    page_num++;
  }

*/

/*
  else clause

  if {expression} statement else statement

  if (i > j)
    max_num = i;
  else
    max_num = j;

*/

/* 
  Nested if else statments

  if (i > j)
    if (i > k)
      max_num = i;
    else
      max_num = k;
  
  else
    if (j > k)
      max_num = j;
    else
      max_num = k;

  You can also add braces to help readability

  if (i > j){
    if (i > k)
      max_num = i;
    else
      max_num = k;
  } 
  else{
    if (j > k)
      max_num = j;
    else
      max_num = k; 
  }
*/

#include <stdio.h>
int main(void){

  int input_num;

  printf("Enter number: ");
  scanf("%d", &input_num);

  if (input_num > 0){
    printf("Number is positive\n");
  }
  else if (input_num == 0){
    printf("Number is 0\n");
  }
  else{
    printf("The number is negative\n");
  }

  return 0;

}

// The need for braces to attach an else statement to an if statement

#include <stdio.h>
int main(void){

  int x, y;
  float result;

  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);

  // Version 1 - no braces

  if (y != 0)
    if (x != 0)
      result = x / y;
  else
    printf("Error - y is equal to 0\n");
  

  // Version 2 - braces

  if (y != 0){
    if (x != 0)
      result = x / y;
  } else
    printf("Error - y is equal to 0\n");

  return 0;

}

/* 
  Conditional Expressions

  expression1 ? expression2 : expression3

  if expression 1 then expression 2 else expression 3

*/

// Switch statement (a shorter version of if)

#include <stdio.h>
int main(void){

  int grade;

  printf("Enter Grade: ");
  scanf("%d", &grade);

  switch(grade){
    case 4: printf("Excellent \n");
      break;
    case 3: printf("Good \n");
      break;
    case 2: printf("Average \n");
      break;
    case 1: printf("Poor \n");
      break;
    case 0: printf("Failing \n");
      break;
    default: printf("Illegal grade \n");
      break;      
  }

  return 0;

}


// Exercises 

// 5.1 

#include <stdio.h>

int main(void){

  int input_num;

  printf("Enter number: ");
  scanf("%d", &input_num);

  if (input_num <= 9){
    printf("The number %d is 1 digit \n", input_num);
  }
  else if (input_num >= 10 && input_num <= 99){
    printf("The number %d is 2 digits \n", input_num);
  }
  else if (input_num >= 100 && input_num <= 999){
    printf("The number %d is 3 digits \n", input_num);
  }
  else{
    printf("The number %d is 4 digits or above \n", input_num);
  }

  return 0;

}

// 5.2 

#include <stdio.h>

int main(void){

  int hour, minute;

  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%d:%d", &hour, &minute);

  if (hour >= 13){
    if (hour == 13){
      printf("Equivalent 12-hour time: 1:%02d pm \n", minute);
    }
    else if (hour == 14){
      printf("Equivalent 12-hour time: 2:%02d pm \n", minute);
    }
    else if (hour == 15){
      printf("Equivalent 12-hour time: 3:%02d pm \n", minute);
    }
    else if (hour == 16){
      printf("Equivalent 12-hour time: 4:%02d pm \n", minute);
    }
    else if (hour == 17){
      printf("Equivalent 12-hour time: 5:%02d pm \n", minute);
    }
    else if (hour == 18){
      printf("Equivalent 12-hour time: 6:%02d pm \n", minute);
    }
    else if (hour == 19){
      printf("Equivalent 12-hour time: 7:%02d pm \n", minute);
    }
    else if (hour == 20){
      printf("Equivalent 12-hour time: 8:%02d pm \n", minute);
    }
    else if (hour == 21){
      printf("Equivalent 12-hour time: 9:%02d pm \n", minute);
    }
    else if (hour == 22){
      printf("Equivalent 12-hour time: 10:%02d pm \n", minute);
    }
    else if (hour == 23){
      printf("Equivalent 12-hour time: 11:%02d pm \n", minute);
    }
    else if (hour == 24){
      printf("Equivalent 12-hour time: 12:%02d pm \n", minute);
    }
  }
  else{
    printf("%02d:%02d am", hour, minute);
  }

  return 0;
}

// 5.3 

#include <stdio.h>

int main(void){

    int shares;
    float price_per_share, commission, share_value;

    printf("Number of shares purchased: ");
    scanf("%d", &shares);
    printf("Price-per-share: ");
    scanf("%f", &price_per_share);

    share_value = shares * price_per_share;

    if (share_value < 2500.00f){
      commission = 30.00f + (.17f * share_value);
    }
    else if (share_value <= 6250.00f){
      commission = 56.00f + (.0066f * share_value);
    }
    else if (share_value <= 20000.00f){
      commission = 76.00f + (.0034f * share_value);
    }
    else if (share_value <= 50000.00f){
      commission = 100.00f + (.0022f * share_value);
    }
    else if (share_value <= 100000.00f){
      commission = 155.00f + (.0011f * share_value);
    }
    else {
      commission = 255.00f + (.0009 * share_value);
    }

    printf("Commission: $%.2f \n", commission);

    return 0;

}

// 5.4

#include <stdio.h>

int main(void){

  int knots;

  printf("Enter Knots: ");
  scanf("%d", &knots);

  if (knots < 1){
    printf("Calm \n");
  }
  else if (knots < 4){
    printf("Light air \n");
  }
  else if (knots < 28){
    printf("Breeze \n");
  }
  else if (knots < 48){
    printf("Gale \n");
  }
  else if (knots < 63){
    printf("Storm \n");
  }
  else {
    printf("Hurricane \n");
  }

  return 0;

}

// 5.5

#include <stdio.h>

int main(void){

  int taxable_income;

  printf("Enter taxable income: ");
  scanf("%d", &taxable_income);

  if (taxable_income < 750){
    printf("Tax due: %.2f \n", taxable_income * .001);
  }
  else if (taxable_income < 2250){
    printf("Tax due: %.2f \n", 7.50 + ((taxable_income - 750)* .02));
  }
  else if (taxable_income < 3750){
    printf("Tax due: %.2f \n", 37.50 + ((taxable_income - 2250)* .03));
  }
  else if (taxable_income < 5250){
    printf("Tax due: %.2f \n", 82.50 + ((taxable_income - 3750)* .04));
  }
  else if (taxable_income < 7000){
    printf("Tax due: %.2f \n", 142.50 + ((taxable_income - 5250)* .05));
  }
  else{
    printf("Tax due: %.2f \n", 230.0 + ((taxable_income - 7000) * .06));
  }

  return 0;
}

// 5.6

#include <stdio.h>

int main(void){

  int upc_one, upc_two, upc_three, upc_four, upc_five, upc_six, upc_seven, upc_eight, upc_nine, upc_ten, upc_eleven, upc_twelve;

  printf("Enter UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &upc_one, &upc_two, &upc_three, &upc_four, &upc_five, 
                                              &upc_six, &upc_seven, &upc_eight, &upc_nine, &upc_ten, &upc_eleven, &upc_twelve);


  int odd_digits = (upc_one + upc_three + upc_five + upc_seven + upc_nine + upc_eleven) * 3;
  int evens = odd_digits + (upc_two + upc_four + upc_six + upc_eight + upc_ten);
  int evens_remained = evens % 10;
  int result = 9 - ((evens - 1) % 10);

  if (upc_twelve == result){
    printf("Valid UPC and check digit \n");
  }
  else{
    printf("Invalid UPC \n");
  }

  return 0;

}

// 5.7 

#include <stdio.h>
int main(void){

  int num_one, num_two, num_three, num_four;
  int largest, smallest;
  int temp_large, temp_small;


  printf("Enter four numbers (seperated by space): ");
  scanf("%d%d%d%d", &num_one, &num_two, &num_three, &num_four);


  if (num_one > num_two) {
      largest = num_one;
      smallest = num_two;
  } else {
      largest = num_two;
      smallest = num_one;
    }

  if (num_three > num_four) {
      temp_large = num_three;
      temp_small = num_four;
  } else {
      temp_large = num_four;
      temp_small = num_three;
    }

  if (temp_large > largest) {
      largest = temp_large;
    }

  if (temp_small < smallest) {
        smallest = temp_small;
    }

  printf("Largest: %d \n", largest);
  printf("Smallest: %d \n", smallest);

  return 0;

}

// 5.8 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hour, min, user_time;

    int d1 = 480;   // 08:00
    int d2 = 583;   // 09:43
    int d3 = 679;   // 11:19
    int d4 = 767;   // 12:47
    int d5 = 840;   // 14:00
    int d6 = 945;   // 15:45
    int d7 = 1140;  // 19:00
    int d8 = 1305;  // 21:45

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &min);

    user_time = (hour * 60) + min;

    printf("Closest departure time is ");

    if (user_time <= d1 + (d2 - d1) / 2) {
        printf("8:00am, arriving at 10:16am\n");
    } else if (user_time <= d2 + (d3 - d2) / 2) {
        printf("9:43am, arriving at 11:52am\n");
    } else if (user_time <= d3 + (d4 - d3) / 2) {
        printf("11:19am, arriving at 1:31pm\n");
    } else if (user_time <= d4 + (d5 - d4) / 2) {
        printf("12:47pm, arriving at 3:00pm\n");
    } else if (user_time <= d5 + (d6 - d5) / 2) {
        printf("2:00pm, arriving at 4:08pm\n");
    } else if (user_time <= d6 + (d7 - d6) / 2) {
        printf("3:45pm, arriving at 5:55pm\n");
    } else if (user_time <= d7 + (d8 - d7) / 2) {
        printf("7:00pm, arriving at 9:20pm\n");
    } else {
        printf("9:45pm, arriving at 11:58pm\n");
    }

    return 0;
}

// 5.9 

#include <stdio.h>

int main(void){

  int day_one, month_one, year_one;
  int day_two, month_two, year_two;
  int earliest_date = 0;

  printf("Enter first date (dd/mm/yy): ");
  scanf("%2d/%2d/%2d", &day_one, &month_one, &year_one);
  printf("Enter second date (dd/mm/yy): ");
  scanf("%2d/%2d/%2d", &day_two, &month_two, &year_two);

  if (year_one == year_two){
    if (month_one == month_two){
      if (day_one == day_two){
        earliest_date = 0;
      }
      else if (day_one > day_two){
        earliest_date = 2;
      }
      else {
        earliest_date = 1;
      }
    }
    else if (month_one > month_two){
      earliest_date = 2;
    }
    else{
      earliest_date = 1;
    }
  }
  else if (year_one > year_two){
    earliest_date = 2;
  }
  else{
    earliest_date = 1;
  }

  switch(earliest_date){
    case 0: printf("The dates are the same! \n");
      break;
    case 1: printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d \n", day_one, month_one, year_one, day_two, month_two, year_two);
      break;
    case 2: printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d \n", day_two, month_two, year_two, day_one, month_one, year_one);
      break;
    default: printf("No dates given! \n");
      break; 
    }

  return 0;

}

// 5.10 

#include <stdio.h>
int main(void){

  int score;

  printf("Enter numerical grade: ");
  scanf("%d", &score);

  score = score / 10;

  switch(score){
    case 10: printf("Illegal grade \n");
      break;
    case 9: printf("Letter grade: A \n");
      break;
    case 8: printf("Letter grade: B \n");
      break;
    case 7: printf("Letter grade: C \n");
      break;
    case 6: printf("Letter grade: D \n");
      break;
    case 5: 
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("Letter grade: F \n");
      break;
    default: printf("Illegal grade \n");
      break;
  }

  return 0;

}

// 5.11

#include <stdio.h>
int main(void) {

    int num_one, num_two;
    char *str_first = ""; 

    printf("Enter a two-digit number: ");
    if (scanf("%1d%1d", &num_one, &num_two) != 2) {
        printf("Error: Please enter a two-digit number.\n");
        return 1;
    }

    printf("You entered the number: ");

    switch (num_one) {
        case 0:
            switch (num_two) {
                case 0: printf("Zero \n"); break;
                case 1: printf("One \n"); break;
                case 2: printf("Two \n"); break;
                case 3: printf("Three \n"); break;
                case 4: printf("Four \n"); break;
                case 5: printf("Five \n"); break;
                case 6: printf("Six \n"); break;
                case 7: printf("Seven \n"); break;
                case 8: printf("Eight \n"); break;
                case 9: printf("Nine \n"); break;
            }
            break; 

        case 1:
            switch (num_two) {
                case 0: printf("Ten \n"); break;
                case 1: printf("Eleven \n"); break;
                case 2: printf("Twelve \n"); break;
                case 3: printf("Thirteen \n"); break;
                case 4: printf("Fourteen \n"); break;
                case 5: printf("Fifteen \n"); break;
                case 6: printf("Sixteen \n"); break;
                case 7: printf("Seventeen \n"); break;
                case 8: printf("Eighteen \n"); break;
                case 9: printf("Nineteen \n"); break;
            }
            break;

        case 2: str_first = "Twenty"; break;
        case 3: str_first = "Thirty"; break;
        case 4: str_first = "Forty"; break;
        case 5: str_first = "Fifty"; break;
        case 6: str_first = "Sixty"; break;
        case 7: str_first = "Seventy"; break;
        case 8: str_first = "Eighty"; break;
        case 9: str_first = "Ninety"; break;
    }

    if (num_one >= 2) {
        printf("%s", str_first);
        switch (num_two) {
            case 1: printf("-one \n"); break;
            case 2: printf("-two \n"); break;
            case 3: printf("-three \n"); break;
            case 4: printf("-four \n"); break;
            case 5: printf("-five \n"); break;
            case 6: printf("-six \n"); break;
            case 7: printf("-seven \n"); break;
            case 8: printf("-eight \n"); break;
            case 9: printf("-nine \n"); break;
            default: break; 
        }
    }

    return 0;
}