#include <stdio.h>
#include <string.h>

int num_words(char*); 

int main(void) {
    char str[100]; 
    strcpy(str, "    1     2 3  4 5 6  7 8 9  10 11   12     13           14         15");

    printf("The number of words of string \"%s\" is %d.\n", str, num_words(str)); 
}

// program to count the number of str string
int num_words(char* str) {
    int result; 
    result = 0; 

    int index = 1; 
    while (1) {
        if (str[index -1] == 0) {
            break; 
        }
        
        // 
        while (str[index -1] == 32 && str[index -1] != 0) {
            ++index; 
        } 
        
        if (str[index -1] != 0) {
            ++result; 
        }

        while (str[index -1] != 32 && str[index -1] != 0) {
            ++index; 
        }
    }

    return result; 
}