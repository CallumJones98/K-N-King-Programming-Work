/*
  C supports two integer types - int and float

  For an integer the leftmost bit is the signed bit (0 if the int is positive and 1 if negative)

  Largest 16 bit binary representation is:

  0111111111111111

  An unsigned integer can represent only zero and positive values (allowing for larger bit space)

  In C the default for an integer is to be a signed bit

  -------------------------------

  C's integer types come in different sizes, the int type is usually 32 bits 

  C allows for different length ints such as long int and short int

  e.g. unsigned short int

  C programmers often omit the word int e.g.

  unsigned short;

  --------------------------------

  Types by values (based on 16 bit machine):

  short int (smallest value = -32,768, largest value = 32,767)

  unsigned short int (smallest val = 0, largest = 65,535)

  int (smallest val = -32,768, largest = 32,767)

  unsigned int (smallest val = 0, largest = 65,535)

  long int (smallest val = -2,147,483,648, largest = 2,147,483,647)

  unsigned long int (smallest val = 0, largest = 4,294,967,295)


  One way to check, based on the compiler, the limits of the ranges is to use <limits.h>

*/

#include <stdio.h>
#include <limits.h>

int main() {
    printf("--- Integer Limits on this System ---\n");

    // Limits for standard signed integers
    printf("Short int min: %d\n", SHRT_MIN);
    printf("Short int max: %d\n", SHRT_MAX);
    
    printf("Int min:       %d\n", INT_MIN);
    printf("Int max:       %d\n", INT_MAX);

    // Limits for unsigned integers (always start at 0)
    printf("Unsigned int max: %u\n", UINT_MAX);

    // Limits for long integers (use %ld for long)
    printf("Long min:      %ld\n", LONG_MIN);
    printf("Long max:      %ld\n", LONG_MAX);

    return 0;
}


/* 

  C99 also allows for long long int

  Integer Constants:

  C allows for integer constants to be written in decimal (base 10), octal (base 8), and hexadecimal (base 16)

  Decimal constants (contain digits between 0 and 9 and must not begin with a 0):

  15      255       32767

  Octal constants (contain only digits between 0 and 7 and must begin with a 0):

  017     0377      077777

  Hexadecimal constants (contain digits between 0 and 9 and letters between a and f, and always begin with 0x):

  0xff    0xfF    0XFF    0xFF

  The compiler will go through data types and determine the octal or hexadecimal storage. However to force a 
  compiler to treat a constant as a long int follow up with the letter L e.g.

  15L   03777L  0x7fffL

  To indicate that the constant is unsigned put the letter U after it:

  15U    03777U     0x7fffU

*/

#include <stdio.h>
int main(void){

  unsigned int u;

  printf("Enter number: ");
  scanf("%u", &u); // Use %u to read u in base 10 (can also use %o for base 8)

  printf("You entered the number %u", u); // Writes u in base 10 (can also use %o for base 8)

  return 0;

}

/*

  unsigned int:
  %u or %o

  short int:
  %hd (put h in front of d, o, u, or x)

  long int:
  %ld (put l in front of d, o, u, or x)

  long long int;
  %lld (put ll in front of d, o, u, or x)

*/

// Floating types 

/*

  Various different floating types:

  float (single precision floating point)

  double (double precision floating point)

  long double (extended precision floating point)

*/

/* 

  Char types

  char ch;

  ch = 'a'; / lower case a /
  ch = ' ' / is a space /

  constants are enclosed in single quotes not double quotes 

  C treats small characters as single integers

*/

#include <stdio.h>
int main(void){

  char ch;
  int i;

  i = 'a'; // i is now 97
  ch = 65;  // ch is now 'A'
  ch = ch + 1; // ch is now 'B'
  ch++; // ch is now 'C'

  printf("%c \n", ch);

  return 0;

}

/*

  The integer and floating types are known as arithmetic types

  Integral types:
    - char
    - signed integer
    - unsigned integer
    - Enumerated
  
  Floating types:
   - float
   - double

*/

/*

  You can use toupper function for character handling

  ch = toupper(ch); // converts char to upper case

  to use toupper you need to inclue

  #include <ctype.h> 

*/

/* 

  You can use getchar() instead of scanf to read a character e.g.

  ch = getchar();   // stores char in ch variables

*/

#include <stdio.h>
int main(void){

  char ch;

  printf("Enter character:");

  ch = getchar();
  
  printf("You stored: ");

  putchar(ch);

  printf("\n");

  return 0;

}

// Getting the length of a message

#include <stdio.h>
int main(void){

  char ch;
  int len = 0;

  printf("Enter a message: ");
  ch = getchar();

  while (ch != '\n'){
    if (ch != ' '){
      len++;
    }

    ch = getchar();
  }

  printf("Your message was %d character(s) long \n", len);

  return 0;

}

/*

  Type conversion:

  When a compiler handles conversions automatically in an expression, without the programmers involvement,
  they're known as implicit conversions.

  C also allows for explicit conversions using the cast operator.

  (type name) expression 

  e.g.

  float f, frac_part;

  frac_part = f - (int) f;

*/

/* 

  Type definitions

  Instead of using:
    
    #define BOOL int 
  
  Use:

    typedef int Bool; 

*/

#include <stdio.h>
int main(void){

  typedef float Dollars;

  Dollars cash_in, cash_out;

}

/*

  sizeof operator:

  The sizeof operator allows a program to determine how much memory is required to store values of a particular
  type. 

  sizeof (type name);

*/

#include <stdio.h>
int main(void){

  int a;
  long int b;
  unsigned char ch;
  double fl;

  printf("Size of int: %zu bytes \n", sizeof(a));
  printf("Size of long int: %zu bytes \n", sizeof(b));
  printf("Size of unsigned char: %zu bytes \n", sizeof(ch));
  printf("Size of double: %zu bytes \n", sizeof(fl));

  return 0;

}

// Exercises 

// 7.4


#include <stdio.h>
int main(void){

  char ch;

  printf("Enter phone number: ");
  ch = getchar();

  while (ch != '\n'){
    if (ch == 'A' || ch == 'B' || ch == 'C'){
      printf("2");
    }
    else if (ch == 'D' || ch == 'E' || ch == 'F'){
      printf("3");
    }
    else if (ch == 'G' || ch == 'H' || ch == 'I'){
      printf("4");
    }
    else if (ch == 'J' || ch == 'K' || ch == 'L'){
      printf("5");
    }
    else if (ch == 'M' || ch == 'N' || ch == 'O'){
      printf("6");
    }
    else if (ch == 'P' || ch == 'R' || ch == 'S'){
      printf("7");
    }
    else if (ch == 'T' || ch == 'U' || ch == 'V'){
      printf("8");
    }
    else{
      printf("9");
    }

    ch = getchar();
  }

  printf("\n");

  return 0;

}

// 7.5

#include <stdio.h>
#include <ctype.h> 
int main(void){

  char ch;
  int score = 0;

  printf("Enter a word: ");
  ch = getchar();

  while (ch != '\n'){
    
    ch = toupper(ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' || ch == 'N' || ch == 'O' || ch == 'R' || ch == 'S'
        || ch == 'T' || ch == 'U'){
          score += 1;
        }
    else if (ch == 'D' || ch == 'G'){
          score += 2;
    }
    else if (ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P'){
          score += 3;
    }
    else if (ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y'){
          score += 4;
    }
    else if (ch == 'K'){
          score += 5;
    }
    else if (ch == 'J' || ch == 'X'){
          score += 8; 
    }
    else{
      score += 10;
    }

    ch = getchar();
  }

  printf("Scrabble value: %d \n", score);

  return 0;

}

// 7.7

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char operator;
    int nume_one, denom_one, nume_two, denom_two;
    int result_nume, result_denom;

    printf("Enter expression: ");
    scanf("%d/%d %c %d/%d", &nume_one, &denom_one, &operator, &nume_two, &denom_two);

    if (operator == '+') {
        result_nume = (nume_one * denom_two) + (nume_two * denom_one);
        result_denom = denom_one * denom_two;
    } 
    else if (operator == '-') {
        result_nume = (nume_one * denom_two) - (nume_two * denom_one);
        result_denom = denom_one * denom_two;
    } 
    else if (operator == '*') {
        result_nume = nume_one * nume_two;
        result_denom = denom_one * denom_two;
    } 
    else if (operator == '/') {
        result_nume = nume_one * denom_two;
        result_denom = denom_one * nume_two;
    }

    if (result_nume == 0) {
        printf("The result is: 0\n");
        return 0;
    }

    //Find GCD 
    int a = abs(result_nume);
    int b = abs(result_denom);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int GCD = a;

    printf("The result is: %d/%d \n", result_nume / GCD, result_denom / GCD);

    return 0;
}


// 7.10

#include <stdio.h>
#include <ctype.h>
int main(void){

  char ch;
  int count = 0;

  printf("Enter a sentence: ");
  ch = getchar();

  for (char ch = getchar(); ch != '.'; ch = getchar()) {
          char lower_ch = tolower(ch);
          if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
              count++;
          }
      }

  printf("Your sentence contained %d vowels \n", count);

  return 0;

}

// 7.11

#include <stdio.h>
int main(void) {
    char first_initial;
    char last_name[20]; 

    printf("Enter a first and last name: ");
    scanf(" %c%*s %s", &first_initial, last_name);

    printf("%s, %c. \n", last_name, first_initial);

    return 0;
}

// 7.13

#include <stdio.h>
#include <ctype.h>
int main(void) {
    int word_len = 0;
    int total_words = 0;
    char ch;

    printf("Enter a sentence: ");

    // We can get the first character right here
    ch = getchar();

    while (ch != '\n' && ch != '.') {
        if (ch != ' ') {
            word_len++;
        } else {
            total_words++;
        }
        ch = getchar();
    }

    total_words++;

    if (total_words > 0) {
        float avg_len = (float)word_len / total_words;
        printf("Average word length: %.2f\n", avg_len);
    }

    return 0;
}