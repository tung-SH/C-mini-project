/************************************************
 * subarray_division -- bài toán chia thanh socola 
 *      trong hacherrank 
 * 
 * PURPOSE: 
 *      1. rèn luyện cách sử dụng conditional compilation 
 *      2. tạo ra chương trình nhập giá trị 
 *          số mẩu socola và giá trị của 
 *          từng mẩu socola trong thanh cùng như tháng sinh 
 *          và ngày sinh rồi sau đó xuất ra màn hình tương tác 
 *          số cách chia mẩu socola đó ra 
 * 
 * STATUS: gặp khó khăn trong thực hiện nhập giá trị trong mục 2 (purpose) và mục 2 (usage)
 *          - phần nhập giá trị của từng mẩu socola: ko thể sử dụng 
 *          fgets do số lượng biến biến thiên theo giá trị nhập trước đó 
 *          sử dụng scanf thì gặp lỗi phải nhập thừa 1 giá trị mẩu socola mới sang bước tiếp theo 
 * 
 * 
 * 
 * SOURCE: hackerrank - https://tinyurl.com/tungsh4 
 * 
 * USAGE: 
 *      1. đầu tiên thì nhập số mảnh socola trong thanh socola 
 *      2. sau đó nhập giá trị trên từng mảnh socola trong 1 hàng 
 *          ngăn cách nhau bởi dấu cách 
 *      3. nhập trên cùng 1 hàng tháng sinh và ngày sinh 
 *      4. màn hình hiện ra kết quả số cách chia thanh socola 
*/
// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "setting.h"


/***********************************************************
 * sum_arr_range -- tổng của các giá trị của mảng số nguyên từ 
*/
int sum_arr_range(int* arrV, int endIndexV, int num) {
    static int num_call = 0; /* the number of times function call */
    static int num_end = 0; /* the number of times function end */
    
    ++num_call; 

    int result; 

    if (num == 1) {
        result = arrV[endIndexV -1]; 
    } else {
        result = arrV[endIndexV -1] + sum_arr_range(arrV, endIndexV - 1, num - 1); 
    }

    ++num_end; 

    #ifdef DEBUG2
    {
        if (num_end == num_call) {
            printf("The sum of %d nth element back to %d elements int list is %d", endIndexV, num, result); 
        }
    }
    #endif 


    return result; 
}

/******************************************************
 * num_way_share_chocolate_bar -- số cách để chia thanh socola 
 * 
 * 
*/
int num_way_share_chocolate_bar(int* choco_square_integersV, int num_squareV, int birth_monthV, int birth_dayV) {
    static int num_call = 0; /* number of times this function is call */ 
    static int num_end = 0; /* number of times this function return end */

    ++num_call;  

    int result; 

    if (num_squareV == birth_monthV) {
        if (sum_arr_range(choco_square_integersV, num_squareV, birth_monthV)) {
            result = 1; 
        } else {
            result = 0; 
        }
    } else {
        if (sum_arr_range(choco_square_integersV, num_squareV, birth_monthV) == birth_dayV) {
            result = 1 + num_way_share_chocolate_bar(choco_square_integersV, num_squareV - 1, birth_monthV, birth_dayV); 
        } else {
            result = 0 + num_way_share_chocolate_bar(choco_square_integersV, num_squareV - 1, birth_monthV, birth_dayV);
        }
    }

    ++num_end; 

    #ifdef DEBUG1 
        if (num_end == num_call) {
            printf("The final number of ways is %d", result); 
        }
    #endif 

    return result; 
}




int* integer_choco_squares; /* list store the integers on each choco square */
int num_square; /* number of choco squares */
int birth_day; /* birth day */
int birth_month; /* birth month */
char line[100]; /* input line */

int main(void) {

}
