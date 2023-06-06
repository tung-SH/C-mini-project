/*******************************************
 * box.c -- giá trị tổng quan cái hộp 
 * 
 * PURPOSE: 
 *      - tổng quan: hỗ trợ cho việc 
 *          hiểu về cách dùng của biến địa chỉ 
 *      - cụ thể: định nghĩa hộp và 2 hàm cơ bản 
 * 
 * STATUS: 
 *      - [x]: code chưa hoàn thiện 
 *      - [ ]: code hoàn thành mục đích 
 *      - [ ]: code gặp lỗi tại dòng 
 *              Ghi chú lỗi      
 * 
 * SOURCE: book - practical C && tự nghĩ 
 * 
**********************************************/
#include "header file/setting_general.h"
#include <stdlib.h>

struct box {
    int length, width, height; 
}; 

typedef struct box box; 

const long long MAX_LENGTH = 100000; /* MAX LENGTH OF STRING */

/***************************************************
 * box_template -- tạo ra 1 giá trị mẫu để bỏ vào 
 *      biến hộp 
 * 
 * 
*/
box box_template(int lengthV, int widthV, int heightV) {
    box result; 

    result.length = lengthV; 
    result.width = widthV; 
    result.height = heightV; 

    #ifdef DEBUG_G3
        printf("box template is box(%d,%d,%d).\n", result.length, result.width, result.height); 
    #endif

    return result; 
}


/****************************************
 * box_to_string -- biểu hiện giá trị 
 *      điểm bằng xâu kí tự 
 * 
 * 
*/
char* box_to_string(box boxV) {
    char* result; 

    result = (char*)malloc(MAX_LENGTH); 
    sprintf(result, "box(%d,%d,%d)", boxV.length, boxV.width, boxV.height); 

    #ifdef DEBUG_G3
        printf("box value is %s", result); 
    #endif

    return result; 
}

/************************************
 * box_extragerate_twice -- phóng đại 
 *      hộp lên 2 lần 
 * 
 * example: 
 * 
*/
void box_extragerate_twice(box *box_ptr) {
    (*box_ptr).height *= 2; 
    (*box_ptr).length *= 2; 
    (*box_ptr).width *= 2; 
}

#ifdef DEBUG_G

box lego_box; /* lego box */
box carton; 

int main(void) {
    lego_box = box_template(10, 10, 10); 
    carton = box_template(2, 4, 3); 

    printf("What is next of height in box is %d", *(&(lego_box.height) + 1));

    box_extragerate_twice(&lego_box); 
    
    box_to_string(lego_box); 
}       


#endif