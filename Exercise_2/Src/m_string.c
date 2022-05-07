
#include <stdbool.h>
#include <stdio.h>

// Macro get size_of_array
// #define SIZE_OF_ARRAY(array)  (sizeof(array)/sizeof(array[0]))

int array_equal(const int* array1, size_t size1, const int* array2, size_t size2){
    int flag = 1;
    if (size1 != size2){
       return flag = 0; 
    }  
    for (size_t i = 0; i < size1; ++i){
        if (array1[i] != array2[i]){
            return flag = 0;
        }
    }
    return flag;
}

void show_array(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insert_array(int *array1 , size_t size1 , int *arr_insert , size_t size_arr_insert , int index)
{
    if(index >= 0 && index <= size1) 
    {
        for (int i = size1 + size_arr_insert - 1; i >= index ; i--)
        {
           array1[i] = array1[i - size_arr_insert]; 
        }

        for(int i = index; i < index + size_arr_insert; i++)
        {
           array1[i] = arr_insert[i - index];
	    }

        printf("Mang sau khi chen:\n");
        for (int j = 0; j <= size_arr_insert + size1 - 1; j++)
        {
            printf("%d\n", array1[j]);
        }	
	}
    
    else
    {
        printf("Index khong phu hop!");
    }
}



// int main(void)
// {
//     // int mang1[] = {1,5,3,7,8,4,3,5};
//     // int mangchen[] = {2,5,4};
//     // insert_array(mang1 , SIZE_OF_ARRAY(mang1) , mangchen , SIZE_OF_ARRAY(mangchen) , 3);
//     //int array1[] = {0, 1, 2, 3, 4};
//     // int array2[] = {0, 1, 4};
//     // int array3[] = {0, 1, 2, 3, 4};
//     // int array4[] = {0, 1, 2, 3, 4, 5};
//     //show_array(array1, 5);
//     // printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array1, SIZE_OF_ARRAY(array1)));
//     // printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array2, SIZE_OF_ARRAY(array2)));
//     // printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array3, SIZE_OF_ARRAY(array3)));
//     // printf("%d\n", array_equal(array1, SIZE_OF_ARRAY(array1), array4, SIZE_OF_ARRAY(array4)));
//     return 0;
// }



