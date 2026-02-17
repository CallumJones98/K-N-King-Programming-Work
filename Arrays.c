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


// Using sizeof operators with arrays

// The sizeof operator can determine the size of an array (in bytes). If a is an array of 10 integers then sizeof(a) is typically 40 bytes, assuming each integer requires 4 bytes

#include <stdio.h>
int main(void){

  int a[10] = {10,20,30,40,50,60,70,80,90,100};

  printf("The size of one element is %zu \n", sizeof(a[0]));
  printf("The size of the array is: %zu \n", sizeof(a) / sizeof(a[0])); // returns the length of an array

  return 0;

} 

/* Multi dimensional arrays 

  int m[5][9];  // An array that has 5 rows, 9 columns

  To access the elements in the array use m[row][col]

*/

// Identity matrix

#include <stdio.h>
#define N 10

int main(void){

  double ident[N][N];
  int row, col;

  for (row = 0; row < N; row++){
    for (col = 0; col < N; col++){
      if (row == col){
        ident[row][col] = 1.0;
      }
      else{
        ident[row][col] = 0.0;
      }
    }
  }
}

/*

  Using constant arrays:

  const char hex_chars[] = {'0', '1', '2', '3', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

*/


// 8.1 

#include <stdio.h>
#include <stdbool.h>
int main(void){

  bool digit_seen[10] = {false};
  bool all_seen[10] = {false};
  long num;
  bool repeated_nums = false;

  printf("Enter a number: ");
  scanf("%ld", &num);

  while (num > 0){
    int popped_digit = num % 10;
    if (digit_seen[popped_digit]){
      repeated_nums = true;
      all_seen[popped_digit] = true; 
    }

    digit_seen[popped_digit] = true;
    num /= 10;

  }

  if (repeated_nums){
    printf("Repeated digit(s): ");
    for (int i = 0; i < sizeof(all_seen) / sizeof(all_seen[0]); i++){
      if(all_seen[i]){
        printf("%d ", i);
      }
    }
  }

  printf("\n");

  return 0;

}
  

// 8.2
#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int nums_count[10] = {0}; 
  long num;
  bool repeated = false;

  printf("Enter a number: ");
  scanf("%ld", &num);

  while (num > 0) {
    int digit = num % 10;
    nums_count[digit]++; 
    if (nums_count[digit] > 1) {
      repeated = true; 
    }
    num /= 10;
  }

  if (repeated) {
    printf("%-12s", "Digit:");
    for (int i = 0; i < 10; i++) {
      if (nums_count[i] >= 0) {
        printf("%d ", i);
      }
    }
    
    printf("\n%-12s", "Occurrences:");
    for (int i = 0; i < 10; i++) {
      if (nums_count[i] >= 0) {
        printf("%d ", nums_count[i]);
      }
    }
    printf("\n");
  } else {
    printf("No repeated digits found.\n");
  }

  return 0;
}

// 8.4 

#include <stdio.h>
#include <ctype.h>
int main(void){

    char new_string[100]; 
    char ch;
    int i = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && i < 99) {
        if (ch == 'a' || ch == 'A') {
            new_string[i] = '4'; 
        } 
        else if (ch == 'b' || ch == 'B'){
            new_string[i] = '8';
        }
        else if (ch == 'e' || ch == 'E'){
            new_string[i] = '3';
        }
        else if (ch == 'i' || ch == 'I'){
            new_string[i] = '1';
        }
        else if (ch == 'o' || ch == 'O'){
            new_string[i] = '0';
        }
        else if (ch == 's' || ch == 'S'){
            new_string[i] = '5';
        }
        else {
            ch = toupper(ch);
            new_string[i] = ch;  
        }
        i++; 
    }

    new_string[i] = '\0'; 

    printf("Modified sentence: %s\n", new_string);

    return 0;
}

// 8.5

#include <stdio.h>
int main(void){

  int matrix[5][5] = {0};
  int rows = 5;
  int cols = 5;

  printf("Enter the values for a %dx%d matrix:\n", rows, cols);

  for (int i = 0; i < rows; i++){
    printf("Enter row %d: ", i+1);
    for (int j = 0; j < cols; j++){
      scanf("%d", &matrix[i][j]); 
        }      
    }

  printf("Row totals: ");

  for (int i = 0; i < rows; i++){
      int row_sum = 0;
      for (int j = 0; j < cols; j++){
        row_sum += matrix[i][j];
      }
      printf("%d ", row_sum);
  }

  printf("\n");
  printf("Column Totals: ");

  for (int j = 0; j < cols; j++){
    int col_sum = 0;
    for (int i = 0; i < rows; i++){
      col_sum += matrix[i][j];
    }
    printf("%d ", col_sum);
  }

  return 0;

}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str1[100], str2[100];
    int counts[26] = {0}; // One bucket for each letter of the alphabet

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams (different lengths).\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        counts[tolower(str1[i]) - 'a']++;
        counts[tolower(str2[i]) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            printf("Not anagrams.\n");
            return 0;
        }
    }

    printf("They are anagrams!\n");
    return 0;
}


// Flip the case of the char

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[100];
    int i = 0;
    int ch;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && i < 99) {
        if (isupper(ch)) {
            str[i] = tolower(ch);
        } else if (islower(ch)) {
            str[i] = toupper(ch);
        } else {
            str[i] = ch; 
        }
        i++;
    }
    str[i] = '\0'; 

    printf("Case changed string: %s\n", str);
    return 0;
}


#include <stdio.h>
#define N 10
int main(void){

  int array[N];

  printf("Enter 10 elements into the array: \n");

  for(int i = 0; i < N; i++){
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("Elements in array are: ");

  for (int el = 0; el < N; el++){
    printf("%d ", array[el]);
  }

  return 0;

}

#include <stdio.h>
int main(void){

  int array_len;

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &array_len);

  int array[array_len];

  printf("Input %d elements in the array: \n", array_len);

  for(int i = 0; i < array_len; i++){
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  // reverse

  printf("Reversed array: ");

  for(int reverse_i = array_len - 1; reverse_i >= 0; reverse_i--){
    printf("%d ", array[reverse_i]);
  }

  printf("\n");

  return 0;

}

// Sum Calculation

#include <stdio.h>
int main(void){

  int sum = 0;
  int array_len;

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &array_len);

  int array[array_len];

  printf("Input %d elements in the array \n", array_len);

  for(int i = 0; i < array_len; i++){
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
    sum += array[i];
  }

  printf("Sum of all elements stored in the array is: %d \n", sum);

  return 0;

}

// Copied array 

#include <stdio.h>
int main(void){

  int array_len;

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &array_len);

  int array[array_len];
  int copied_array[array_len];

  printf("Input %d elements in the array \n", array_len);

  for(int i = 0; i < array_len; i++){
    printf("Enter element %d: ", i + 1);
    scanf("%d", &array[i]);
    copied_array[i] = array[i];
  }

  printf("The elements in the copied array are: \n");

  for (int val = 0; val < array_len; val++){
    printf("%d ", copied_array[val]);
  }

  printf("\n");

  return 0;

}

// Count duplicate elements

#include <stdio.h>
int main(void){

  int array_len;
  int count = 0; 

  printf("Input the number of elements to store in the array: ");
  scanf("%d", &array_len);

  int array[array_len];

  printf("Input %d elements in the array: \n", array_len);
  for(int i = 0; i < array_len; i++) {
      printf("Element %d: ", i + 1);
      scanf("%d", &array[i]);
    }

  for(int i = 0; i < array_len; i++) {
      for(int j = i + 1; j < array_len; j++) {
          if(array[i] == array[j]) {
              count++;
              break; 
            }
        }
    }

    printf("Total number of duplicate elements found: %d\n", count);

    return 0;
    
}

// Binary Search in C 

#include <stdio.h>
#define N 22
int main(void){

  int array[N] = {1,2,3,4,7,8,9,11,12,17,19,22,31,41,90,91,99,102,110,145,175,201};
  int target = 102;

  int left = 0;
  int right = N - 1;

  while (left <= right) {

    int mid_point = left + (right - left) / 2;

    if(array[mid_point] == target){
      printf("Target found at index %d \n", mid_point);
      break;
    }

    else if (array[mid_point] < target){
      left = mid_point + 1;
    }

    else{
      right = mid_point - 1;
    }
  }

  return 0;

}