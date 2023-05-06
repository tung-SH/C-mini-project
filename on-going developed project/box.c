/**************************************
 * box -- generate the box general variable 
 * 
 * STATUS: 
 * 
 * SOURCE: 
*/

#include <stdlib.h>
// #include "setting.h"
#include <string.h>
#include "int_to_string.c"

struct box {
    int length; 
    int width; 
    int height; 
}; 

typedef struct box box; 


/*****************************************
 * box_assign_value -- assign value to 
 *          general variable box 
*/
void box_assign_value(box* box_ptr, int len, int wid, int hei) {
    box_ptr->length = len; 
    box_ptr->width = wid; 
    box_ptr->height = hei; 

    #ifdef DEBUG
        printf("The box:\nlength: %d\nwidth: %d\nheight: %d.\n", box_ptr->length, box_ptr->width, box_ptr->height); 
    #endif
}

/*******************************
 * box_template -- create a value of 
 *      box type value 
*/
box Box_template(int len, int wid, int hei) {
    box result; 

    result.length = len; 
    result.width = wid; 
    result.height = hei; 

    #ifdef DEBUG
        printf("The box:\nlength: %d\nwidth: %d\nheight: %d.\n", result.length, result.width, result.height); 
    #endif

    return result; 
}

/**************************************
 * box_to_string -- represent the value of
 *          general variable box 
 * 
 * 
*/
char* box_to_string(box boxV) {
    char* result; 
    result = (char*)malloc(50); 

    strcpy(result, "box(");
    strcat(result, itos(boxV.length)); 
    strcat(result, ","); 
    strcat(result, itos(boxV.width)); 
    strcat(result, ","); 
    strcat(result, itos(boxV.height)); 
    strcat(result, ")");  

    #ifdef DEBUG
        printf("The box is %s.\n", result); 
    #endif

    return result; 
}

/****************************************
 * box_get_volume -- calc the volume of input 
 *              box 
 * 
 * boxEx = box(2, 3, 2)
 * example: box_get_volume(boxEx) --> 12
*/
int box_get_volume(box boxV) {
    int result; 

    result = boxV.length * boxV.width * boxV.height; 

    #ifdef DEBUG
        printf("the volume of %s is %d.\n", box_to_string(boxV), result); 
    #endif 

    return result; 
}

// int main(void) {
//     box carton, inoxBox; 

//     carton = Box_template(3, 3, 3); 
//     inoxBox = Box_template(12, 10, 7); 

//     box_get_volume(carton); 
//     box_get_volume(inoxBox); 

// }