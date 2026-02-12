/*

  Scalar variables = holds single value
  Aggregate variables = holds collections of values (arrays)


  Arrays:

  To declare an array you must specify the type of elements stored in the array and the number of elements

  int a[10];    // An array that stores 10 integer elements 


  #define N 10

  int a[N];

  Array subscripting:

  To access a particular element of an array you can write the name of the array with the index of the element e.g.

  a[3]

*/


#include <stdio.h>
#define N 10
int main(void){

  int a[N];
  int i;

  for (i = 0; i < N; i++){
    printf("Enter number: ");
    scanf("%d", &a[i]);
  }

  printf("%d \n", a[6]);

  return 0;
}


// Reversing a sequence of numbers in an array

#include <stdio.h>
#define N 10
int main(void){

  int a[N], i;

  printf("Enter %d numbers: ", N);

  for (i = 0; i < N; i++){
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  
  for (i = N - 1; i >= 0; i--){
    printf(" %d", a[i]);
  }

  printf("\n");

  return 0;

}

/*

  You can use an array initialiser

  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  If the initaliser is shorter than the array the remaining elements of the array are given the value 0 e.g.

  int a[10] = {1,2,3,4,5,6}

  a[10] = {1,2,3,4,5,6,7,8,9,10}

  For a designated initialiser (where some of the elements values are set)

  int a[15];

  int a[15] = {[2] = 29, [9] = 7, [14] = 48};

  a[15] = {0,0,29,0,0,0,0,0,7,0,0,0,0,48,0};

*/

// Checking if any digits are repeated

#include <stdio.h>
#include <stdbool.h>
int main(void){

  bool digit_seen[10] = {false};
  int digit;
  long num;

  printf("Enter a number: ");
  scanf("%ld", &num);

  while (num > 0){
    digit = num % 10;
    if (digit_seen[digit]){
      break;
    }
    digit_seen[digit] = true;
    num /= 10;
  }

  if (n > 0){
    printf("Repeated digit \n");
  }
  else{
    pritnf("No repeated digits \n");
  }

  return 0;

}

// Experiment finding target variable

#include <stdio.h>
int main(void){

  int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int tar;

  printf("Enter target: ");
  scanf("%d", &tar);

  for (int i = 0; i < 10; i++){
    if (a[i] == tar){
      printf("%d found in array at index %d \n", tar, i);
      break;
    }
  }

  return 0;

}