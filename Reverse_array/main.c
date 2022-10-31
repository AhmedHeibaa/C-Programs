#include<stdio.h>
typedef unsigned char uint8_t ;
typedef unsigned short int uint16_t ;


void reverseArray(uint8_t *arr , uint8_t arrSize){

    uint8_t start =0 , end = arrSize -1 , temp =0;
    while (start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(uint8_t *arr, int size)
{
  uint8_t i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
 
  printf("\n");
}

int main()
{
    uint8_t array[] = {1, 2, 3, 4, 5, 6,7,8};
    uint8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    printArray(array, arrLen);
    reverseArray(array,arrLen);
    printf("Reversed array is \n");
    printArray(array, arrLen);
    return 0;
}