#include <stdio.h>
#include <string.h>
#define oa -1


char password[100]; /* the password */

// int count_lack; /* the number of lacking condition of a strong password */
// int complement; /* the min chracter to complement into password */

int is_index_out_of_str(char*, int); 
int is_any_char_str1_in_str2(char*, char*); 
int count_lacking_condition(char*); 

int main(void) {
    strcpy(password, "TungSh@2810"); 

    printf("%d", count_lacking_condition(password)); 

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

// program to count the lacking condition to a strong password
int count_lacking_condition(char* str) {
    int result = 0; 

    char number_str[100]; 
    char lower_case_str[100]; 
    char upper_case_str[100]; 
    char special_character_str[100]; 
    strcpy(number_str, "0123456789"); 
    strcpy(lower_case_str, "abcdefghijklmnopqrstuvwxyz"); 
    strcpy(upper_case_str, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"); 
    strcpy(special_character_str, "!@#$%^&*()-+");  
    


    if (!is_any_char_str1_in_str2(str, number_str)) {result++;}
    if (!is_any_char_str1_in_str2(str, lower_case_str)) {result++;}
    if (!is_any_char_str1_in_str2(str, upper_case_str)) {result++;}
    if (!is_any_char_str1_in_str2(str, special_character_str)) {result++;}


    return result; 
}