#include <stdio.h>
#define oa -1 

void initial_square_matrix(int*, int); 
void print_square_matrix(int*, int); 
void assign_row_square_matrix(int*, int, int, int); 

int main(void) {
    int matrix[3 * 3]; 
    initial_square_matrix(matrix, 3);
    assign_row_square_matrix(matrix, 3, 1, 2); 
    assign_row_square_matrix(matrix, 3, 3, 2); 

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

// program to assign the v value to r row of matr matrix with s size 
void assign_row_square_matrix(int* matr, int s, int r, int v) {
    for (int i = 1; i <= s; ++i) {
        *(matr + (r oa) * s + (i oa)) = v; 
    }
}
