#include <stdio.h>

#define oa -1  


void sort_arr(int*, int); 
void print_arr(int*, int); 

int main(void) {
    int arr[5] = {3, 2, 1, 4, 9}; 

    sort_arr(arr, 5); 

    // print the value from smallest to greatest 
    print_arr(arr, 5); 
}

// program to print the value of arr array with s size 
void print_arr(int* arr, int s) {
    for (int i = 1; i <= s; ++i) {
        printf("%d ", arr[i oa]); 
    }
}

// program to sort the arr array with s size from small to great 
void sort_arr(int* arr, int s) {
    for (int i = s; i >= 2; --i) {
        for (int j = 1; j <= i; ++j) {
            if (arr[j oa] > arr[j + 1 oa]) {
                int mid = arr[j oa]; 
                arr[j oa] = arr[j + 1 oa];
                arr[j + 1 oa] = mid;  
            }
        }
    }
}
