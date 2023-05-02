#include <stdio.h>

struct Triangle {
    int a, b, c;

}; 

typedef struct Triangle Triangle; 

void print_triangle(Triangle); 
void copy_triangle(Triangle*, Triangle*); 
void swap_triangle(Triangle*, Triangle*); 

int main(void) {
    Triangle tr1 = {3, 4, 5};
    Triangle tr2 = {7, 6, 5};  

    swap_triangle(&tr1, &tr2); 

    print_triangle(tr1);
    print_triangle(tr2);

}

// program to print the tr triangle
void print_triangle(Triangle tr) {
    printf("The triangle with values of 3 sides is %d %d %d\n", tr.a, tr.b, tr.c); 
}

// program to copy the triangle tr2 to triangle tr1
void copy_triangle(Triangle *tr1_ptr, Triangle *tr2_ptr) {
    tr1_ptr->a = tr2_ptr->a; 
    tr1_ptr->b = tr2_ptr->b; 
    tr1_ptr->c = tr2_ptr->c;
}

// program to swap the 2 triangle tr1 and tr2
void swap_triangle(Triangle *tr1_ptr, Triangle *tr2_ptr) {
    Triangle mid = {0, 0, 0}; 
    copy_triangle(&mid, tr1_ptr);
    copy_triangle(tr1_ptr, tr2_ptr);
    copy_triangle(tr2_ptr, &mid);
}



