#include <stdio.h>
#define N 22
int main(void){

  int array[N] = {1,2,3,4,7,8,9,11,12,17,19,22,31,41,90,91,99,102,110,145,175,201};
  int target = 102;

  int left = 0;
  int right = N - 1;

  while (left <= right){

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