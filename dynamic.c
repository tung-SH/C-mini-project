/********************************
 * dynamic -- play with add and delete 
 *      value in list dynamically 
 * 
*/

#include <stdio.h>
#include <stdlib.h>

char line[100]; /* input line */

int* age_list; /* age list */ 
int num_element; /* numbero of elements in age list */

void add_value(int); 
void delete_value(void); 

int main(void) {
    num_element = 1; 
    age_list = (int*)malloc(1 * sizeof(int)); 
    age_list[1 -1] = 20; 

    while (1) {
        int instruction_code; /* the instruction code */
        printf("1. add the value to the list.\n2. delete the last value.\nEnter the instruction code: ");
        fgets(line, sizeof(line), stdin); sscanf(line, "%d", &instruction_code); 

        if (instruction_code == 0) {
            break; 
        }

        if (instruction_code == 1) {
            int value; 
            printf("Enter the added value: "); 
            fgets(line, sizeof(line), stdin); sscanf(line, "%d", &value); 

            add_value(value);  
        } else {
            delete_value(); 
        }

    }    

    {
        int index = 1; 
        while (index <= num_element) {
            printf("%d ", age_list[index -1]); 
        }
    }

}


/**************************************
 * add -- add value to list dynamically
*/
void add_value(int value) {
    age_list = (int*)realloc(age_list, ++num_element); 
    age_list[num_element -1] = value; 
}

/*****************************************
 * delete -- delete the value dynamically
*/
void delete_value(void) {
    age_list = (int*)realloc(age_list, --num_element); 
}