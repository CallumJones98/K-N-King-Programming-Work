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