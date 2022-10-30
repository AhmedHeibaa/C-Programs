#include<stdio.h>
#include<limits.h>
typedef unsigned char u_int8_t ;
typedef unsigned short int u_int16_t ;



void print2SecSmallest(u_int8_t *arr, u_int8_t arrSize ){
    int first , second ,i  ;
    first = second = INT_MAX; // Initialize as infinity
    for(i =0; i < arrSize; i ++)
    {
        if(arr[i] < first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
            
    
    }

     if (second == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The smallest element is %d and second "
               "Smallest element is %d\n", first, second);
}



int main()
{
    u_int8_t array[5] = {7,2,9,10,6};
    u_int8_t arrLen = (sizeof(array)/ sizeof(array[0]));
    print2SecSmallest(array,arrLen);
    
    return 0;
}