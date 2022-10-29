#include<stdio.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;


void bubbleSort(u_int8_t *arr,u_int8_t arrLength){
    u_int8_t temp =0;
    for (u_int8_t i =0; i<arrLength-1; i++){
        for(u_int8_t j =0 ; j< arrLength-i-1; j++){
             if (arr[j] > arr[j+1]){
                temp =arr[j] ;
                arr[j] =arr[j+1];
                arr[j+1] = temp;
             }
             else{;}
        }
}
}

/* Function to print an array */
void printArray(u_int8_t *arr, u_int8_t arrLength)
{
    int i;
    for (i = 0; i < arrLength; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    u_int8_t array[5] = {3,2,9,10,6};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    bubbleSort(array,arrLen);
    printf("Sorted array: \n");
    printArray(array,arrLen);
    return 0;
}