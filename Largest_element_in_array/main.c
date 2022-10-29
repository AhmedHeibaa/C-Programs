#include<stdio.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;


u_int8_t largestElement(u_int8_t *arr,u_int8_t arrLength){
    u_int8_t largest = arr[0];
    for(u_int8_t i=1; i<arrLength; i++){
        
        if(arr[i] > largest)
        { 
        largest = arr[i] ;
        }
         else{;}      
    }
    return largest ;
}

int main()
{
    u_int8_t array[5] = {3,2,2,1,6};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    printf("the largest element in array is =  %d\n", largestElement(array,arrLen));
    return 0;
}
