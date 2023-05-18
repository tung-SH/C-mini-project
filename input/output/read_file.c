/***************************************
 * read_file -- đọc 1 file và copy nội dung của nó 
 *      ra file stdout 
 * 
 * PURPOSE: 
 *      1. xây dựng các cánh cửa cho căn nhà lớn 
 *      2. đọc dữ liệu từ file ngoài và in ra file stdout 
 * 
 * STATUS: code hoàn thành mục tiêu 
 * 
 * SOURCE: https://tinyurl.com/tungsh5
*/
#include <stdio.h>
#include "setting.h"
#include <string.h>

const long long MAX_LENGTH = 10000; /* MAX LENGTH OF STRING */
const char FILE_INPUT_NAME[] = "input.txt"; 

FILE* input_data_file; /* the input file to collect data */

int main(void) {
    input_data_file = fopen(FILE_INPUT_NAME, "r"); 

    while(1)
    {   
        char* str_ptr; 
        char str[MAX_LENGTH]; /* variable to store the text input from input file */
        str_ptr = fgets(str, sizeof(str), input_data_file); 
        
        if (str_ptr == NULL) {// if reach end of file 
            break; 
        }

        #ifdef DEBUG
            printf("%s", str); 
        #endif /* DEBUG */
    }


    fclose(input_data_file);  
}