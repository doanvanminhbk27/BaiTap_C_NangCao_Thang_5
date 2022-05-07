#include "../Inc/Convert.h"
#include <stdio.h>
#include <string.h>

void dec_to_bin(){
    int a[10], number, i, j;
    printf("Enter decimal number: ");
    scanf("%d", &number);
    
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    
    printf("\n0b");
    for(j = i - 1; j >= 0; j--){
        printf("%d", a[j]);
    }
    printf("\n");
}

// Su dung de quy 
void dec_to_hex(int dec){
    if (dec < 16)  
    {
        printf("\n0x%c","0123456789ABCDEF"[dec]); 
        return;
    } 
    else 
        dec_to_hex(dec / 16);
        printf("%c","0123456789ABCDEF"[dec % 16]);
}




