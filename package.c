/**************************************
 * box -- generate the box general variable 
 * 
 * PURPOSE: định nghĩa giá trị tổng quan kiện hàng
 *      để giải quyết bài toán post transition 
 *      trong hackerrank 
 * 
 * STATUS: tạo định nghĩa và 2 hàm cơ bản cho giá trị 
 *      kiện hàng 
 * 
 * SOURCE: hackerrank - C prepare - post transition 
*/

#include <stdlib.h> 
// #include "setting.h"
#include <string.h>
#include "int_to_string.c"

struct package {
    char* id; /* id of the package */
    int weight; /* weight of the package */
}; 

typedef struct package package; 


/*******************************
 * package_template - tạo ra giá trị 
 *      để gán vào biến tổng quan kiện hàng - package 
 * 
*/
package package_template(char* idV, int weightV) {
    package result; 

    result.id = (char*)malloc(strlen(idV)); 
    strcpy(result.id, idV); 
    result.weight = weightV; 


    #ifdef DEBUG
        printf("package:\nId: %s\nWeight: %dKg\n----------------\n", result.id, result.weight); 
    #endif

    return result; 
}

/**************************************
 * package_to_string -- minh họa giá trị 
 *      1 kiện hàng - package 
 * 
 * 
*/
char* package_to_string(package packageV) {
    char* result; 
    result = (char*)malloc(100); 

    strcpy(result, "Package:\nId: "); 
    strcat(result, packageV.id); 
    strcat(result, "\nWeight: "); 
    strcat(result, itos(packageV.weight)); 
    strcat(result, "Kg\n---------------\n"); 

    #ifdef DEBUG
        printf("%s\n", result); 
    #endif

    return result; 
}


// int main(void) {
//     package gift, letters; 

//     {
//         char id[] = "id_0"; 
//         gift = package_template(id, 120); 
//     }
//     {
//         char id[] = "id_1"; 
//         letters = package_template(id, 3); 
//     }

//     package_to_string(gift); 
//     package_to_string(letters); 
// }

