/*******************************************
 * random.c -- hàm random trong C
 * 
 * PURPOSE: 
 *      - tổng quan: 
 *      - cụ thể: 
 * 
 * STATUS: 
 *      - [ ]: code chưa hoàn thiện 
 *      - [x]: code hoàn thành mục đích 
 *      - [ ]: code gặp lỗi tại dòng 
 *              Ghi chú lỗi      
 * 
 * SOURCE: tự nghĩ 
 * 
**********************************************/
#include <stdio.h>
#include <stdlib.h>



int random(int startV, int endV) {
    int result; 

    int n = endV - startV + 1; 

    result = (rand() % n) + startV; 


    return result; 
}

int main(void) {
    int n = 4; 
    for (int i = 1; i <= 10; ++i) {
        printf("Random number is %d.\n", random(1, 3)); 
    }
}