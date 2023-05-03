/*************************************************
 * point.c -- create the general variable (point)
 * 
 * SOURCE: website - https://tinyurl.com/tungsh
 * 
*/

#include <math.h>
#include <string.h>
#include "int_to_string.c"
// #include "setting.h"

struct point {
    int x, y; /* coordinate of point */
}; 

typedef struct point point; 

/***********************************
 * p_assign_value -- assign value to 
 *          variable point
 * 
 * parameter: 
 *      p_ptr -- pointer to the point
 *          to assign value 
 *      xV - value to assign to x of point
 *      yV - value to assign to y of point 
 *  
**********************************************/
void p_assign_value(point* p_ptr, int xV, int yV) {
    p_ptr->x = xV;
    p_ptr->y = yV; 
}  

/**********************************************
 * p_to_string -- represent the point 
 * 
 * paramter: 
 *      p -- the point need to represent 
 * 
 * returns: 
 *      a string which is present the point 
**********************************************/
char* p_to_string(point p) {
    char* result; 
    result = (char*)malloc(30); 

    strcpy(result, "point("); 
    strcat(result, itos(p.x)); 
    strcat(result, ","); 
    strcat(result, itos(p.y)); 
    strcat(result, ")"); 

    #ifdef DEBUG
        printf("this is %s", result);  
    #endif 

    return result; 
}

/*******************************
 * distance -- distance between 2 points
 * 
 * parameters: 
 *      pointA -- point A
 *      pointB -- point B
 * 
 * returns: 
 *      distance between point A and 
 *      point B
 * 
 * A(1, 2)  B(2, 3)
 * example: distance(A, B) --> 1.41
 * 
*/
float distance(point pointA, point pointB) {
    float result; 

    result = sqrtf(
        powf(pointB.x - pointA.x, 2) +
        powf(pointB.y - pointA.y, 2)
    ); 

    #ifdef DEBUG
        printf("distance between %s and %s is %f", p_to_string(pointA), p_to_string(pointB), result); 
    #endif

    return result; 
}




// int main(void) {
//     point A, B; 
//     p_assign_value(&A, 1, 2);
//     B = A; 

//     printf("point A is %s, point B is %s", p_to_string(A), p_to_string(B)); 
// }