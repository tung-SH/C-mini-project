/*****************************************
 * time_conversion -- chuyển giờ AM/PM thành giờ kiểu 24h 
 * 
 * PURPOSE: 
 *      - rèn luyện với việc xây dựng các bức tường rời rạc,
 *          do chưa biết bức tường đó sẽ được dùng để dựng nên 
 *          căn nhà như thế nào
 * 
 *      - xây dựng hàm time_conversion 
 * 
 * STATUS: 
 * 
 * SOURCE: hackerrank - time conversion - https://tinyurl.com/tungsh3
 *  
*/

#include "int_to_string.c"
#include "cut_sub_string.c"

const int MAX_LENGTH = 100; /* max length of string */

char line[MAX_LENGTH]; /* input line */


/*********************************
 * time_conversion -- chuyển đổi xâu thời gian định dạng 12h sang 
 *          định dạng 24h 
 * 
 * 
*/
char* time_conversion(const char* timeV) {
    char* result; 
    result = (char*)malloc(MAX_LENGTH); 

    char* am_or_pm; /* sub string to store "AM" or "PM" */
    int hour; /*  the hour */

    am_or_pm = cut_sub_string(timeV, 9, 2); 
    hour = stoi(cut_sub_string(timeV, 1, 2), 2); 

    if (strcmp(am_or_pm, "AM") == 0) {
        if (hour == 12) {
            strcpy(result, "00"); 
            strcat(result, cut_sub_string(timeV, 3, 6));  
        } else {
            strcpy(result, cut_sub_string(timeV, 1, 8)); 
        }
    } else {
        if (hour == 12) {
            strcpy(result, cut_sub_string(timeV, 1, 8)); 
        } else {
            hour = hour + 12; 
            strcpy(result, itos(hour)); 
            strcat(result, cut_sub_string(timeV, 3, 6)); 
        }
    }
    
    #ifdef DEBUG
        printf("The time after conversion is %s.\n", result); 
    #endif

    return result; 
}

int main(void) {
    
}