/**********************************
 * box -- xây dựng giá trị cơ bản hộp 
 * 
 * PURPOSE: 
 * 
 * STATUS: 
 * 
 * SOURCE: tự nghĩ ra
 * 
*/

#include "setting.h"
#include "int_to_string.c"
#include <stdlib.h>
#include <string.h>

const long long MAX_LENGTH = 10000; /* MAX LENGTH OF STRING */

struct box {
    int length; /* length of the box */
    int width; /* width of the box */
    int height; /* height of the box */
}; 

typedef struct box box; 

/*********************************************
 * box_template -- tạo ra giá trị để gán vào 
 *      biến loại hộp - box 
 * 
*/
box box_template(int lengthV, int widthV, int heightV) {
    box result; 

    result.length = lengthV; 
    result.width = widthV; 
    result.height = heightV; 

    #ifdef DEBUG5
        fprintf(stdout, "Box(%dcm, %dcm, %dcm)\n", result.length, result.width, result.height); 
    #endif /* DEBUG */

    return result; 
}

/*********************************
 * box_to_string -- thể hiện giá trị 
 *      của giá trị tổng quát hộp bằng 
 *      xâu kí tự 
*/
char* box_to_string(box boxV) {
    char* result; 

    result = (char*)malloc(MAX_LENGTH); 

    sprintf(result, "Box (%dcm,%dcm,%dcm)", boxV.length, boxV.width, boxV.height); 

    #ifdef DEBUG5
        fprintf(stdout, "%s", result); 
    #endif

    return result; 
}

box box_template_by_file(const char* file_name) {
    box result; 

    char line[100]; /* input line */
    FILE* file; 
    file = fopen(file_name, "r"); 

    fgets(line, sizeof(line), file); 
    fgets(line, sizeof(line), file); 
    {
        int l, w, h; /* middle variable */
        sscanf(line, "%d,%d,%d", &l, &w, &h); 
        result = box_template(l, w, h); 
    }

    #ifdef DEBUG4
        printf("box template from file %s is %s", file_name, box_to_string(result)); 
    #endif

    fclose(file); 
    return result; 
}



#ifdef DEBUG4

const char FILE_NAME[] = "box - Sheet1.csv"; 



int main(void) {
    box carton; 

    carton = box_template(3, 3, 3); 

    box_to_string(carton); 
}

#endif /* DEBUG */