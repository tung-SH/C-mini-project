/******************************
 * dynamic_array -- xây dựng dữ liệu danh sách cơ động 
 *      giá trị số nguyên 
 * 
 * PURPOSE: 
 *      1. tạo cơ sở dữ liệu cho việc hiểu hơn về danh sách cơ động 
 *      2. tạo cơ sở dữ liệu và 2 hàm cơ bản
 *      3. tạo hàm thêm và hàm xóa dữ liệu 
 * 
 * STATUS: code chạy chưa như mong muốn ở mục 3 - hàm thêm 
 *      - cụ thể đứng ở dòng số 84 - nghi vấn do vấn đề thuộc 
 *          chủ đề pointer  
 * 
 * SOURCE: tự nghĩ ra 
 * 
*/
#include "setting.h"
#include "int_to_string.c"
#include <stdlib.h>
#include <string.h>

struct dynamic_array {
    int num_elements; /* number of elements */
    int* elements; /* actual list */
}; 

typedef struct dynamic_array dynamic_array; 

/**************************************
 * dynamic_array_to_string -- minh họa giá trị của danh sách cơ động
 * 
 * 
*/
char* dynamic_array_to_string(dynamic_array dynamic_arrayV) {
    char* result; 
    result = (char*)malloc(100);

    strcpy(result, "dynamic array:\n");
    strcat(result, "Number of elements: "); 
    strcat(result, itos(dynamic_arrayV.num_elements)); 
    strcat(result, "\nElements: "); 
    for (int i = 1; i <= dynamic_arrayV.num_elements; ++i) {
        strcat(result, itos(dynamic_arrayV.elements[i -1])); 
        strcat(result, " "); 
    }
    strcat(result, "\b.\n-------------------\n"); 

    #ifdef DEBUG3
    {
        printf("%s", result); 
    }
    #endif

    return result;
}

/*******************************************
 * dynamic_array_template -- tạo giá trị 
 * 
*/
dynamic_array dynamic_array_template(int num_elementsV, int* elementsV) {
    dynamic_array result;

    result.num_elements = num_elementsV; 
    result.elements = (int*)malloc(num_elementsV * sizeof(int)); 

    for (int i = 1; i <= num_elementsV; ++i) {
        result.elements[i -1] = elementsV[i -1]; 
    }

    #ifdef DEBUG2 
    {
        printf("%s", dynamic_array_to_string(result)); 
    }
    #endif

    return result; 
}

/************************************************************
 * dynamic_array_add -- thêm giá trị vào danh sách cơ động
 *  
*/
void dynamic_array_add(dynamic_array* dynamic_array_ptr, int value) {
    dynamic_array_ptr->num_elements = dynamic_array_ptr->num_elements + 1; 

    dynamic_array_ptr->elements = (int*)realloc(dynamic_array_ptr->elements, dynamic_array_ptr->num_elements); 

    dynamic_array_ptr->elements[dynamic_array_ptr->num_elements -1] = value; 

    #ifdef DEBUG2 
    {
        printf("%s", dynamic_array_to_string(*dynamic_array_ptr)); 
    }
    #endif
}



int main(void) {
    dynamic_array student_score_list; 
    {
        int arr[4] = {8, 8, 9, 10}; 
        student_score_list = dynamic_array_template(4, arr); 
    }

    dynamic_array_add(&student_score_list, 3); 
}