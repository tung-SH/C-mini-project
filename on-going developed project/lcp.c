/************************************
 * lcp -- tìm bội chung nhỏ nhất của 1 số 
 *      dùng đệ quy 
 * 
 * PURPOSE: 
 *      1. rèn luyện tư duy sử dụng đệ quy 
 *      2. tạo ra được hàm tính bội chung nhỏ nhất của 
 *          2 số nhập vào 
 * 
 * STATUS: 
 * 
 * SOURCE: https://tinyurl.com/tungsh2
*/




#include "setting.h"
#include "on-going developed project/gcd.c"

/***************************
 * lcp -- tính bội chung nhỏ nhất 
 * 
 * example:
 *      lcp(5, 6) --> 30
*/
int lcp(int a, int b) {
    int result; 

    int gcdV = gcd(a, b); 

    result = (a / gcdV) * (b / gcdV) * gcdV; 

    #ifdef DEBUG8
        printf("lcp of %d and %d is %d", a, b, result); 
    #endif

    return result; 
}


int main(void) {
    lcp(4, 6); 
}