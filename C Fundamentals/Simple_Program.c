#include <stdio.h>

int main(void){
  printf("To C, or not to C: That is the question. \n");
  return 0;
}

// Simple Program format:

#include <stdio.h>  // Directives 

int main(void){
  printf("To C, or not to C: That is the question. \n");    // Statements 
  return 0; // Causes the function to terminate
}

// main is a function 
// a function must return something, in this example int main must return an int
// void indivates that the function main has no arguments or attributes

// A variable must be declared before it can be used by the compiler

#include <stdio.h>

int main(void){

  float height, weight;   // These are declarations
  float bmi;


  printf("Enter weight (in kg): ");
  scanf("%f", &weight);
  printf("Enter height (in m): ");
  scanf("%f", &height); 

  bmi = weight / (height * 2);

  printf("BMI is %.1lf \n", bmi);

  return 0;

}

// variable = expression
// volume = height * weight * length;

// having an initialised variables such as int height = 8; 
// The 8 is the initialiser 

// Using a macros definition 

#define INCHES_PER_POUND 166;

// Example being used of macro definition - program to convert fahrenheit to celsius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
  
  float fahrenheit, celsius;

  printf("Enter Fahrenheiit temperature: ");
  scanf("%f", &fahrenheit);


  // calculuate celisus from fahrenheit
  printf("%.2f\u00B0C \n", SCALE_FACTOR * (fahrenheit - FREEZING_PT));

  return 0;

}

// Programming Projects

// 2.1 

#include <stdio.h>

int main(void){

  printf("       *\n");
  printf("      *\n");
  printf("     *\n");
  printf("*   *\n");
  printf(" * *\n");
  printf("  *\n");

  return 0;

}

// 2.2

#include <stdio.h>

#define PI 3.14159265359f
#define VOLUME_FRACTION 4.0/3.0f

int main(void){

  float sphere, sphere_volume, radius_cubed;

  printf("Enter radius of sphere: ");
  scanf("%f", &sphere);

  radius_cubed = sphere * sphere * sphere;
  sphere_volume = (VOLUME_FRACTION) * PI * radius_cubed;

  printf("Volume of sphere: %.2f cubic metres\n", sphere_volume);

  return 0;

}

// 2.4

#include <stdio.h>

int main(void){

  float money, tax_addition;

  printf("Enter an amount: ");
  scanf("%f", &money);

  tax_addition = money * 0.05;

  printf("%.2f \n", money + tax_addition);

  return 0;

}


// 2.5 

#include <stdio.h>

int main(void){

  int quintic, quartic, cubed, squared, x, result;

  printf("Enter value for x: ");
  scanf("%d", &x);

  quintic = x * x * x * x * x;
  quartic = x * x * x * x;
  cubed = x * x * x;
  squared = x * x;

  result = (3 * quintic) + (2 * quartic) - (5 * cubed) - (squared) + (7 * x) - 6;

  printf("Polynomial result = %d \n", result);

  return 0;

}

// 2.7

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