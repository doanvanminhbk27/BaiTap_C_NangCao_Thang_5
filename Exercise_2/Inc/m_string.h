#ifndef M_STRING_H
#define M_STRING_H

#include <stdbool.h>
#include <stdio.h>

int array_equal(const int* array1, size_t size1, const int* array2, size_t size2);
void show_array(int *arr, int n);
void insert_array(int *array1 , size_t size1 , int *arr_insert , size_t size_arr_insert , int index);

#endif