/*************************************************
 * int_to_string -- convert int type to string 
*/

// #include <stdio.h>
#include <stdlib.h>
// #include "setting.h"


// int num; /* number */

char* itos(int); 
int last_digit(int);
int remove_last_digit(int); 
void reverse_str(char*, int); 

// int main(void) {
//     // printf("%s", itos(132));
//     printf("%s", itos(132));  

// }

/**************************************
 * itos -- convert int to string
 * 
*/
char* itos(int n) {
    char* result; 
    result = (char*)malloc(100); 

    int length = 1; 
    while (1) {
        if (n == 0) {
            result[length -1] = '\0'; 
            --length; 
            break; 
        }

        result[length -1] = last_digit(n) + 48;

        #ifdef DEBUG
            printf("current character is %c.\n", result[length -1]); 
        #endif

        ++length;  

        n = remove_last_digit(n); 

    }

    #ifdef DEBUG
        printf("the string before reverse is %s", result); 
    #endif

    reverse_str(result, length); 

    return result; 
}


/***************************************
 * last_digit -- 
 * 
 * example: last_digit(132) --> 2
 * 
*/
int last_digit(int n) {
    int result; 

    result = n % 10; 

    #ifdef DEBUG 
        printf("last_digit(%d) is %d\n", n, result); 
    #endif

    return result; 
}

/*****************************************
 * remove_last_digit -- 
 * 
 * example: remove_last_digit(132) --> 13
*/
int remove_last_digit(int n) {
    int result; 

    result = (n - (n % 10)) / 10; 

    #ifdef DEBUG 
        printf("remove_last_digit(%d) is %d\n", n, result); 
    #endif

    return result; 
}

/**************************************
 * reverse_str -- reverse the string 
 * 
*/
void reverse_str(char* str, int s) {
    if (s >= 2) {
        char mid; 
        mid = str[1 -1]; 
        str[1 -1] = str[s -1]; 
        str[s -1] = mid; 

        reverse_str(str + 1, s - 2); 
    }
}
