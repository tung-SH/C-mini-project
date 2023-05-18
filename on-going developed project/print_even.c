/************************************
 * print_even -- in các số chẵn trong khoảng 
 *      đã cho
 * 
 * PURPOSE: chứng minh rằng khả năng học của mình 
 *      ko đụt khi rèn luyện trong chủ đề đệ quy
 * 
 * STATUS: code chạy như mong muốn 
 * 
 * SOURCE: https://tinyurl.com/tungsh2 
*/
#include "setting.h"

/********************
 * is_even -- kiểm tra giá trị nhập vào 
 *      có phải là số chẵn hay ko
 * 
 * example: is_even(104) --> 1
 * 
*/
int is_even(int n) {
    int result; 

    result = (n % 2 == 0) ? 1 : 0; 

    return result; 
}

/*********************
 * print_even -- in ra màn hình các số chẵn trong 
 *      khoảng đã cho 
 * 
 * example: print_even(1, 10) --> c:\2 4 6 8 10
 * 
*/
void print_even(int a, int b) {
    if (a == b) {
        if (is_even(a)) {
            printf("%d", a); 
        }
    } else {
        if (is_even(a)) {
            printf("%d ", a); 
            print_even(a + 1, b); 
        } else {
            print_even(a + 1, b); 
        }
    }

}

int main(void) {
    print_even(1, 109); 
}