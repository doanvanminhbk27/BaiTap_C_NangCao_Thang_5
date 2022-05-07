#include "../Inc/Calc.h"
#include <stdio.h>

int sum_array_elements(int a[], int n){
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
       sum += a[i];
   }
   return sum;
}

int max_array(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++)
   {
       if(a[i] > max){
          max= a[i]; 
       }
   }
   return max;
}

int min_array(int a[], int n){
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
       if(a[i] < min){
          min = a[i]; 
       }
    }
   return min;
}

void index_value(int a[], int length)
{
   int value = 0;
   printf("\n nhap gia tri can tim = ");
   scanf("%d", &value);
   for ( int i = 0 ; i < length ; i++)
   {
      if ( a[i] == value)
      {  
         printf("\nphan tu %d cua mang o vi tri: %d ", value, i+1);
      }
    } 
}

// int main(){
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 6, 7, 8, 9};
//    int size_arr = sizeof (arr) / sizeof(int);
//    index_value(arr, size_arr ); 
//    return 0;
// }
