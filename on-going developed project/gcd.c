/*****************************
 * GCD -- tìm ước chung lớn nhất của
 *      2 giá trị nhập vào hàm 
 * 
 * PURPOSE: rèn luyện tư duy học trong đầu với chủ đề 
 *          đệ quy 
 * 
 * STATUS: hàm chạy đơ khi chạy 
 *          gcd(24, 54). Mình 
 *          phỏng đoán nguyên nhân là do mình chưa hiểu sâu 
 *          sắc về chia lấy dư
 * 
 * SOURCE: website - https://tinyurl.com/tungsh2 
 */

#include "setting.h"

/************************************
 * GCD - tìm ước chung lớn nhất của 2 giá trị nhập vào 
 *      sử dụng đệ quy 
 * 
*/
int gcd(int a, int b) {
    int result; 

    if (a % b == 0) {
        result = b; 
    } else {
        result = gcd(b, a % b); 
    }

    return result; 
}

// int main(void) {
//     printf("%d", gcd(25, 54)); 
// }