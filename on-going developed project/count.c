/************************************************
 * STATUS: code chạy thành công                 *
 *                                              *
 * PURPOSE: Tạo hàm count dùng recursion để     *
 *     học về recursion                         *
 *                                              *
 * SOURCE: exercise - practical C - function    *
 *                                              *
 * *********************************************/

#include <stdio.h>

int list_value[10] = {9, 3, 9, 5, 7, 3, 5, 9, 7}; /* list values */

int count(int, int*, int); 

int main(void) {
    int num = 5; 

    printf("The number of times number %d appears in list of values is %d", num, count(num, list_value, 10)); 


}

/********************************************
 * count -- count the number of times the n * 
 *          number appears in arr list      *
 *                                          *
 * Parameters                               *
 *      n -- the checking number            * 
 *      arr -- the value list               *
 *      s -- the size of list               *
 *                                          *
 * Returns                                  *
 *      number of times n appears in list   *
 *                                          *
*********************************************/
int count(int n, int* arr, int s) {
    int result; 

    if (s == 0) {
        result = 0; 
    } else {
        if (arr[s -1] == n) {
            result = 1 + count(n, arr, s - 1); 
        } else {
            result = 0 + count(n , arr, s - 1); 
        }
    }



    return result; 
}