/***********************************
 * new -- nơi thử code mới 
 * 
 * 
*/
#include <stdio.h>
#include "setting.h"
#include <string.h>

const long long MAX_LENGTH = 10000; /* MAX LENGTH OF STRING */

const char FILE_INPUT_NAME[] = "input.txt"; 

char line[100]; /* input line */

FILE* input_file; /* the input file to collect data */

int main(void) {
    input_file = fopen(FILE_INPUT_NAME, "r"); 



    int n, k; /* input number from input file */
    int result = fscanf(input_file, "N and K: %d %d", &n, &k); 

    if (result > 0) {
        printf("successfully converted value into variable\nN: %d\nK: %d", n, k); 
    } else if (result == 0) {
        printf("file has data but fail to convert value to variable!"); 
    } else if (result == EOF) {
        printf("file has no data!"); 
    }





    fclose(input_file);  
}