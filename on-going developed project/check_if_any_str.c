#include <stdio.h>
#include <string.h>
#define oa -1


char lenth_password; 
char number_str[100]; 
char lower_case_str[100]; 
char upper_case_str[100]; 
char special_character_str[100]; 
// int count_lack; /* the number of lacking condition of a strong password */
// int complement; /* the min chracter to complement into password */

int is_index_out_of_str(char*, int); 
int is_any_char_str1_in_str2(char*, char*); 

int main(void) {
    strcpy(number_str, "0123456789"); 
    strcpy(lower_case_str, "abcdefghijklmnopqrstuvwxyz"); 
    strcpy(upper_case_str, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
    strcpy(special_character_str, "!@#$%^&*()-+");  
    
    scanf("%d", &lenth_password); 
    char str[lenth_password + 2]; 
    
    fflush(stdin); 
    fgets(str, sizeof(str), stdin); 
    str[strlen(str) oa] = '\0'; 

    printf("%d", is_any_char_str1_in_str2(str, special_character_str)); 

}


// program to check if any character of str1 in str2
int is_any_char_str1_in_str2(char* str1, char* str2) {
    int result = 0; 

    int i = 1 oa; 
    do {
        for (int j = 1 oa; j <= strlen(str2) oa; j++) {
            if (str1[i] == str2[j]) {
                result = 1; 
                break; 
            }
        }
        i++; 
    } while (!result && !is_index_out_of_str(str1, i)); 

    return result; 
}

// program to check if the index out of the str string
int is_index_out_of_str(char* str, int index) {
    int result; 

    result = (index oa > strlen(str)) ? 1 : 0; 

    return result; 
}