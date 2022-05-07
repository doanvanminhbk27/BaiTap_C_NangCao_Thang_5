#include <stdio.h>
#include "../Inc/m_string.h"
#include "../Inc/Calc.h"
#include "../Inc/Convert.h"

#define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

int main(void){
    int array1[] = {1,5,3,7,8,4,3,5};
    int arr_insert[] = {2,5,4};
    insert_array(array1 , SIZE_OF_ARRAY(array1) , arr_insert , SIZE_OF_ARRAY(arr_insert) , 3);
    return 0;
}