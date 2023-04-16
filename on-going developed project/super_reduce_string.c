#include <stdio.h>
#include <string.h>

#define oa -1

char str[100000]; 


int is_index_out_of_str(char*, int); 
void cut_chac_str(char*, int); 
void cut_sub_str(char*, int, int); 
void super_reduce_str(char*); 

int main(void) {
    fgets(str, sizeof(str), stdin); 
    // str[strlen(str) oa] = '\0'; 

    super_reduce_str(str); 
    

    if (strlen(str) != 0) {
        printf("%s", str);
    } else {
        printf("Empty String"); 
    }

    return 0; 
}

// program to check if the index out of the str string
int is_index_out_of_str(char* str, int index) {
    int result; 

    result = (index > strlen(str)) ? 1 : 0; 

    return result; 
}

// program to cut the str string n character from a nth elements
void cut_sub_str(char* str, int a, int n) {
    for (int i = 1; i <= n; i++) {
        cut_chac_str(str, a); 
    } 
}


// program to cut the n th element of the string
void cut_chac_str(char* str, int n) {
    for (int i = n + 1 oa; i <= strlen(str) + 1 oa; i++) {
        str[i - 1] = str[i]; 
    }
}

// program to super reduced str string with cut off the pair of same adjacent character one after another 
//  example: "abbac" --> "aac" --> "c"
// 1. start from the first character, if the character right after it is the same, cut the from the current index 2 character then go to the first character 
// 2. if not index to the next character
// 3. if the index is not out of the string, go to step 1 
void super_reduce_str(char* str) {
    int i = 1; 
    do {
        // 1
        if (str[i oa] == str[i + 1 oa]) {
            // 1.1
            cut_sub_str(str, i, 2); 
            i = 1; 
        } else {
            // 1.2
            i++; 
        }
    } while (!is_index_out_of_str(str, i)); 
}