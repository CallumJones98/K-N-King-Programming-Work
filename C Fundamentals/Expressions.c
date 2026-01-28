// Expressions

// Variables and Constants are expressions
// Operators are the basic tools for building expressions e.g.
// Arithmetic operators (+, -, /, *)
// Relational operators (i > 0)
// Logical operators (i > 0 and i < 10)

// unary = require one operator 
// binary = require two operators

// unary example: i = +1
// binary example: i + x

// the divide (/) operator truncates so that 1/2 = 0 and not 0.5

// Operator precedence:
/* 
  Highest: + - (unary)
          * / %
           + - (binary)
*/

// Binary operators are left associative e.g.
/*
  i - i - k is equivalent to (i - j) - k
  i * j / k is equivalent to (i * j) / k 
*/

// An operator is right associative if it groups from right to left e.g. unary:
/*
  - + i is equivalent to - (+i)
*/

// Assignment operators (=) for updating a value in a stored variable

// Assignment operator requires an lvalue which represents an object stored in memory
// Variables are lvalues 

/*
  Compound assignment allow for shortened statements:

  i = i + 2; is equivalent to i += 2;

  i += j += k means i += (j += k);

*/

/*
  Increment and Decrements:

  There are prefix (++i) and postfix (i++)

  e.g.
*/

#include <stdio.h>

int main(void){

  int i = 1;

  printf("i is %d \n", ++i);  //Prefix (meaning i is manipulated before print statement is run) i = 2
  printf("i is %d \n", i); // i = 2

  int x = 1;

  printf("x is %d \n", x++); // postfix (meaning i is manipulated after print statement returns value) x = 1
  printf("x is %d \n", x); // x = 2

  return 0;

}

#include <stdio.h>
int main(void){

  int i = 1;
  int j = 2;
  int k = ++i + j++;
  printf("%d \n", k);
  return 0;
}


// Exponentiation using pow function

#include <stdio.h>
#include <math.h>

int main(){

  int base;
  int exponent;

  printf("Select base: ");
  scanf("%d", &base);
  printf("Select exponent: ");
  scanf("%d", &exponent);

  int result = pow(base, exponent);

  printf("%d raised to the power of %d = %d \n", base, exponent, result);

  return 0;

}

// Exercises

// 4.1 

#include <stdio.h>

int main(void){

  int num;

  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  int num_one = num % 10;
  int num_two = num / 10;

  printf("The reversal is: %d%d \n", num_one, num_two);

  return 0;

}

// 4.2 

#include <stdio.h>

int main(void){

  int num;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  int num_one = num % 10;
  int num_two = (num / 10) % 10;
  int num_three = (num / 10) / 10;

  printf("The reversal is: %d%d%d \n", num_one, num_two, num_three);

  return 0;

}

// 4.4

#include <stdio.h>

int main(void){

  int num;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  int num_one = num % 8;
  int num_two = (num / 8) % 8;
  int num_three = ((num / 8) / 8) % 8;
  int num_four = ((num / 8) / 8) / 8 % 8;
  int num_five = (((num / 8) / (num / 8) / (num / 8)) / 8) % 8;

  printf("%d%d%d%d%d \n", num_five, num_four, num_three, num_two, num_one);

  return 0;

}


// 4.5 

#include <stdio.h>

int main(void){

  int upc_one, upc_two, upc_three, upc_four, upc_five, upc_six, upc_seven, upc_eight, upc_nine, upc_ten, upc_eleven;

  printf("Enter the first 11 digits of UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &upc_one, &upc_two, &upc_three, &upc_four, &upc_five, 
                                              &upc_six, &upc_seven, &upc_eight, &upc_nine, &upc_ten, &upc_eleven);


  int odd_digits = (upc_one + upc_three + upc_five + upc_seven + upc_nine + upc_eleven) * 3;
  int evens = odd_digits + (upc_two + upc_four + upc_six + upc_eight + upc_ten);
  int evens_remained = evens % 10;
  int result = 10 - evens_remained;

  printf("Check Digit: %d \n", result);

  return 0;

}

// 4.6 

#include <stdio.h>

int main(void){

  int upc_one, upc_two, upc_three, upc_four, upc_five, upc_six, upc_seven, upc_eight, upc_nine, upc_ten, upc_eleven, upc_twelve;

  printf("Enter the first 11 digits of EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &upc_one, &upc_two, &upc_three, &upc_four, &upc_five, 
                                              &upc_six, &upc_seven, &upc_eight, &upc_nine, &upc_ten, &upc_eleven, &upc_twelve);


  int even_sum = upc_two + upc_four + upc_six + upc_eight + upc_ten + upc_twelve;
  int odd_sum = upc_one + upc_three + upc_five + upc_seven + upc_nine + upc_eleven;
  int even_add_odd = ((even_sum * 3) + odd_sum) - 1;
  int result = 9 - (even_add_odd % 10);

  printf("Check Digit: %d \n", result);

  return 0;

}