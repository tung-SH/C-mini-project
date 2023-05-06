/**************************************************
 * rectangle -- create general variable rectangle 
 * 
 * STATUS: chương trình chạy đúng mục đích 
 *          mục đích là gì 
 * 
 * 
 * SOURCE: website - https://tinyurl.com/tungsh
***************************************************/

#include "point.c"
// #include "setting.h"

struct rectangle {
    point upperRightPoint; 
    point lowerLeftPoint; 
}; 

typedef struct rectangle rectangle; 

/***************************************************
 * rect_assign_value -- assign value to a 
 *                       rectangle variable 
 * 
 * parameters: 
 *      rect_ptr -- the assigned rectangle pointer
 *      upperRightPointV -- value of upper 
 *                           right point of rectangle 
 *      lowerLeftPointV -- value of lower 
 *                          left point of rectangle  
 * 
********************************************************************/
void rect_assign_value(rectangle* rect_ptr, point lowerLeftPointV, point upperRightPointV) {
    rect_ptr->lowerLeftPoint = lowerLeftPointV; 
    rect_ptr->upperRightPoint = upperRightPointV; 

    #ifdef DEBUG
        printf("upper right point is %s.\nlower left point is %s", p_to_string(rect_ptr->upperRightPoint), p_to_string(rect_ptr->lowerLeftPoint)); 
    #endif

}

/***********************************************
 * rect_to_string -- represent the rectangle 
 * 
*/
char* rect_to_string(rectangle rect) {
    char* result; 
    result = (char*)malloc(100); 

    strcpy(result, "rect["); 
    strcat(result, p_to_string(rect.lowerLeftPoint)); 
    strcat(result, "; "); 
    strcat(result, p_to_string(rect.upperRightPoint)); 
    strcat(result, "]"); 

    #ifdef DEBUG
        printf("the rect is %s", result); 
    #endif

    return result; 
}

int main(void) {
    point A, C; 
    rectangle rectABCD; 

    p_assign_value(&A, 1, 3); 
    p_assign_value(&C, 3, 5); 

    rect_assign_value(&rectABCD, A, C); 

    rect_to_string(rectABCD); 

}