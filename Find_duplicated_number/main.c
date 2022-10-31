#include<stdio.h>
typedef unsigned char uint8_t ;
typedef unsigned short int uint16_t ;


uint8_t dupliatedNumber(uint8_t *arr , uint8_t arrSize){
    uint8_t i , j;
    for(i=0;i<arrSize;i++){
        for(j=0;j<arrSize;j++){
            if(arr[i] == arr[i+1])
            return arr[i];
        }
    }
}



int main()
{
    uint8_t array[] = {1, 2, 3, 4, 6, 7,7,8};
    uint8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    printf("The duplicated number in the array is %d\n",dupliatedNumber(array,arrLen) );
    return 0;
}