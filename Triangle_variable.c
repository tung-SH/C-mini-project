/*********************************************
 * Triangle_variable -- chơi đùa với biến 
 *      tổng quan như gán giá trị, lấy ra 
 *      giá trị của biến tổng quan
 * 
 * STATUS:                                   *
 *      IN RA GIÁ TRỊ CỦA BIẾN TỔNG QUAN     *
 *      CHƯA ĐƯỢC: TO_STRING(TRIANGLE)       *
 *                                           *
 * PURPOSE:                                  *
 *      hình dung ra việc xài biến           *
 *      tổng quan hơn tương tự như xài       *
 *      biến giá trị thuần như (số nguyên,   *
 *      số thập phân, kí tự)                 *
 *                                           *
 * SOURCE:                                   *
 *      lấy gợi ý - problem - hackerrank - C *
 *                                           *
************************************************/



#include <stdio.h>
#include "setting.h"
#include <string.h>

struct Triangle {
    int a, b, c; /* 3 sides of triangle */
};

typedef struct Triangle Triangle; 

Triangle tri1, tri2; /* 2 triangle */
char line[100]; /* input line */


char* to_string_triangle(Triangle); 
void tri_assign_value(Triangle*, int, int, int);  

int main(void) {
    printf("Please enter the triangle 1: \n");  

    #ifdef DEBUG
        printf("%s", to_string_triangle(tri1)); 
    #endif



}

// program to enter tr triangle
void enter_triangle(Triangle* tr_ptr, int aV, int bV, int cV) {
    tr_ptr->a = aV;
    tr_ptr->b = bV;
    tr_ptr->c = cV;  
}

// program to convert tr triangle to a string
char* to_string_triangle(Triangle tr) {
    char* result; 

    result = (char*)malloc(100); 
    strcpy(result, "Triangle"); 
    strcat(result, "(");
    strcat(result, tr.a);
    

    return result; 
}