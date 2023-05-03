/******************************************
 * structure -- play with structure in c
 * 
 * SOURCE: website - https://tinyurl.com/tungsh
*/

#include "setting.h"
#include "point.c"

point A, B; 

int main(void) {
    p_assign_value(&A, 1, 2); 
    B = A; 

    printf("Point A is %s, Point B is %s.\n", p_to_string(A), p_to_string(B)); 

}

