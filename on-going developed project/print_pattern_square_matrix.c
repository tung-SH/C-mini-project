#include <stdio.h>

#define oa -1

char line[100]; /* the input line */
int n; /* the value of the outermost pattern */
int size; /* the size of the matrix */

void initial_square_matrix(int*, int); 
void print_square_matrix(int*, int); 
void assign_column_square_matrix(int*, int, int, int); 
void assign_row_square_matrix(int*, int, int, int); 
void print_pattern_square_matrix(int*, int); 

int main(void) {
    fgets(line, sizeof(line), stdin); sscanf(line, "%d", &n); 

    int size = n * 2 - 1; 
    int matrix[size * size]; 

    initial_square_matrix(matrix, size); 
    
    print_pattern_square_matrix(matrix, size); 

    print_square_matrix(matrix, size); 

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


// program to assign the v value of c column in matr matrix with s size 
void assign_column_square_matrix(int* matr, int s, int c, int v) {
    for (int i = 1; i <= s; ++i) {
        *(matr + (i oa) * s + (c oa)) = v; 
    }
}


// program to assign the v value to r row of matr matrix with s size 
void assign_row_square_matrix(int* matr, int s, int r, int v) {
    for (int i = 1; i <= s; ++i) {
        *(matr + (r oa) * s + (i oa)) = v; 
    }
}

// program to print the pattern to matr matrix begin with s size
void print_pattern_square_matrix(int* matr, int s) {
    int n; /* the value of outermost pattern */
    n = (s + 1)/2; 

    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            assign_column_square_matrix(matr, s, (n + (i - 1)), i); 
        }

        assign_column_square_matrix(matr, s, (n - (i - 1)), i); 
        assign_column_square_matrix(matr, s, (n + (i - 1)), i); 
        assign_row_square_matrix(matr, s, (n - (i - 1)), i); 
        assign_row_square_matrix(matr, s, (n + (i - 1)), i); 
    }
}
