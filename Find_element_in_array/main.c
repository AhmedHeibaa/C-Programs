#include<stdio.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;


u_int8_t findElement(u_int8_t *arr,u_int8_t arrLength,u_int8_t reqElement ){
    
    for(u_int8_t i=0; i< arrLength; i++){
        if (arr[i] == reqElement)
        {
        return i;
        break;
        }
    }
    
}

int main()
{
    u_int8_t array[5] = {3,2,2,1,6};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    printf("The Required element found in index no: %d\n", findElement(array,arrLen,1));
    return 0;
}