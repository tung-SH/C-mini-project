#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

// program to copy the triangle tr2 to triangle tr1
void copy_triangle(triangle*, triangle*); 

// program to swap the 2 triangle tr1 and tr2
void swap_triangle(triangle*, triangle*);

// program to calculate the area of tr triangle
float calc_area_triangle(triangle); 

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    for (int i = n; i >= 2; --i) {
        for (int j = 1; j <= i; ++j) {
            if (calc_area_triangle(tr[j -1]) > calc_area_triangle(tr[j])) {
                swap_triangle(&tr[j -1], &tr[j]); 
            }
        }
    }
    
}



int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle*)malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}



// program to copy the triangle tr2 to triangle tr1
void copy_triangle(triangle *tr1_ptr, triangle *tr2_ptr) {
    tr1_ptr->a = tr2_ptr->a; 
    tr1_ptr->b = tr2_ptr->b; 
    tr1_ptr->c = tr2_ptr->c;
}

// program to swap the 2 triangle tr1 and tr2
void swap_triangle(triangle *tr1_ptr, triangle *tr2_ptr) {
    triangle mid = {0, 0, 0}; 
    copy_triangle(&mid, tr1_ptr);
    copy_triangle(tr1_ptr, tr2_ptr);
    copy_triangle(tr2_ptr, &mid);
}

// program to calculate the area of tr triangle
float calc_area_triangle(triangle tr) {
    float result; 
    float p = (tr.a + tr.b + tr.c) / (float)2; 

    result = sqrtf(p * (p - tr.a) * (p - tr.b) * (p - tr.c)); 


    return result; 
}