#include <stdio.h>
#include <math.h>

struct Triangle {
    int a, b, c; /* 3 side of triangle */
}; 

typedef struct Triangle Triangle; 

float calc_area_triangle(Triangle); 

int main(void) {
    Triangle tr = {3, 4, 2}; 

    printf("The area of the triangle is %f", calc_area_triangle(tr)); 

}

// program to calculate the area of tr triangle
float calc_area_triangle(Triangle tr) {
    float result; 
    float p = (tr.a + tr.b + tr.c) / (float)2; 

    result = sqrtf(p * (p - tr.a) * (p - tr.b) * (p - tr.c)); 


    return result; 
}

