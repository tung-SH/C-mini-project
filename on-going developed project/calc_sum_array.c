#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define oa -1

int n; /* the number of elements in list */
int* value_list; /* the list of value */
int calc_sum_arr(int, int*); 


int main() {
    // nhap
    scanf("%d", &n);
    value_list = (int*)malloc(n * sizeof(int)); 

    for (int i = 1 oa; i <= n oa; i++) {
        scanf("%d", &value_list[i]); 
    }

    printf("%d", calc_sum_arr(n, value_list)); 


    return 0;
}


// program to calculate the sum of all the elements in the arr list with s elements
int calc_sum_arr(int s, int* arr) {
    int result = 0; 

    for (int i = 1 oa; i <= s oa; i++) {
        result += arr[i]; 
    }

    return result; 
}