#include<stdio.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;

u_int16_t sumFun(u_int8_t *arr,u_int8_t arrLength){
    u_int16_t sum = 0;
    for (u_int8_t i=0; i<arrLength; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    u_int8_t array[5] = {5,7,2,1,6};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    printf("the sum of array elements =  %d\n", sumFun(array,arrLen));
    return 0;
}
