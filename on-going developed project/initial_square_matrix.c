#include <stdio.h>

#define oa -1

void initial_square_matrix(int*, int); 
void print_square_matrix(int*, int); 

int main(void) {
    int matrix[3 * 3]; /* the square matrix */

    initial_square_matrix(matrix, 3); 
    print_square_matrix(matrix, 3); 

}

// program to assign all elements in matr square matrix with s size 0 value
void initial_square_matrix(int* matr, int s) {
    for (int i = 1; i <= s; ++i) {
        for (int j = 1; j <= s; ++j) {
            *(matr + (i oa) * s + (j oa)) = 0; 
        }
    }
}

// program to print the matr square matrix with s size 
void print_square_matrix(int* matr, int s) {
    for (int i = 1; i <= s; ++i) {
        for (int j = 1; j <= s; ++j) {
            printf("%d ", *(matr + (i oa) * s + (j oa))); 
        }
        printf("\n"); 
    }
}