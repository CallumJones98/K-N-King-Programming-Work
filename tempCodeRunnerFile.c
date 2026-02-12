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