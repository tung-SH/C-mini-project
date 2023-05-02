#include <stdio.h>

void swap_value(int*, int*); 

int main(void) {
    int a = 1; 
    int b = 2; 

    swap_value(&a, &b); 

    printf("a = %d, b = %d", a, b); 
}

// program to swap the value of 2 variable 
void swap_value(int* a, int* b) {
    int mid = *a; 
    *a = *b; 
    *b = mid; 
}