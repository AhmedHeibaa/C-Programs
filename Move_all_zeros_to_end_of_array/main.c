#include<stdio.h>
#include<limits.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;

void moveZerosToEnd(u_int8_t *arr, u_int8_t arrSize){
    u_int8_t counter =0;

    for(u_int8_t i=0 ; i<arrSize; i++)
    {
        if(arr[i] != 0)
        {
            arr[counter++] = arr[i];
        }
        else{;}
     }

    while (counter < arrSize)
    {
        arr[counter++] = 0;
    }
    
}


int main()
{
    u_int8_t array[] = {1, 5, 8, 2, 0, 0, 18, 20, 0, 6, 0, 4};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    moveZerosToEnd(array,arrLen);
    printf("%s\n", "Array after pushing all zeros to end of array:");
    for (int i = 0; i < arrLen; i++)
      printf("%d ", array[i]);
    
    return 0;
}