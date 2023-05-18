/**********************************
 * cut_sub_string -- cắt mảnh nhỏ của 1 xâu 
 * 
 * PURPOSE: tạo cơ sở hàm để giải quyết vấn đề cho 
 *      bài toán TIME_CONVERSION trong hackerrank
 * 
 * STATUS: code chạy như mong muốn 
 * 
 * SOURCE: hackerrank - https://tinyurl.com/tungsh3
 * 
*/
// #include "setting.h"
#include <stdlib.h>
#include <string.h>

/**********************************
 * cut_sub_string -- cắt ra 1 mảnh xâu từ xâu đầu vào 
 * 
 * parameters: 
 *      str -- giá trị xâu đầu vào 
 *      index -- ví trị bắt đầu tạo mảnh xâu nhỏ 
 *      length -- số kí tự mảnh xâu nhỏ cần tạo 
 * 
 * example: cut_sub_string("hello Tung", 7, 5) --> "Tung"
*/
char* cut_sub_string(const char* strV, int indexV, int lengthV) {
    char* result; 
    result = (char*)malloc(lengthV * sizeof(char)); 

    {
        int index = 1; 

        while(1)
        {
            if (index > lengthV) {
                result[index -1] = 0; 
                break; 
            }
            result[index -1] = strV[indexV -1]; 

            ++index; 
            ++indexV; 
        }
    }

    #ifdef DEBUG 
        printf("The sub string is %s", result); 
    #endif

    return result; 
}


/**************************************
 * stoi -- chuyển string thành giá trị số nguyên 
 * 
 * parameters: 
 *      strV -- giá trị xâu nhập vào
 *      lengthV -- giá trị độ dài xâu 
 * 
 * example: stoi("123", 3) --> (int) 123
*/
int stoi(const char* strV, int lengthV) {
    int result; 

    if (lengthV == 1) {
        result = (int)(strV[1 -1] -48); 
    } else {
        result = stoi(strV, lengthV - 1) * 10 + (int)(strV[lengthV -1] - 48); 
    }

    return result; 
}

