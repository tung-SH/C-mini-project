/*********************************************
 * struct_ex -- struct exercise 
 * 
 * SOURCE: exercise hackerrank - struct - c
 *          https://tinyurl.com/tungsh1
 * 
 * STATUS: code đang chạy thì dừng lại ở dòng 51 
 * 
*/
#include "box.c"
#include <stdio.h>
// #include "setting.h"

#define MAX_HEIGHT 41

char line[100]; /* the input line */
int num_all_box; /* number of boxes */
box* all_box_list; /* a list of boxes */
int num_through_box; /* number of box can go through the tunnel */
box* through_box_list; /* a list of through box */


int main(void) {
    fgets(line, sizeof(line), stdin); sscanf(line, "%d", &num_all_box); 
    all_box_list = (box*)malloc(num_all_box * sizeof(box)); 
    through_box_list = (box*)malloc(num_all_box * sizeof(box)); 

    {
        int index = 1;
        while (index <= num_all_box) // until end of list 
        {
            int l, w, h; // middle variable to create box 
            fgets(line, sizeof(line), stdin); sscanf(line, "%d %d %d", &l, &w, &h); 
            all_box_list[index -1] = Box_template(l, w, h); 

            ++index; 
        }
    }

    #ifdef DEBUG
        for (int index = 1; index <= num_all_box; ++index) {
            printf("Box %d is %s.\n", index, box_to_string(all_box_list[index -1]));
        }
    #endif

    num_through_box = 0; 
    {
        int index = 1; 
        while (index <= num_all_box) // until end of all box list 
        {
            if (all_box_list[index -1].height < MAX_HEIGHT) {
                ++num_through_box; 
                through_box_list[num_through_box -1] = all_box_list[index -1]; 
            }

            ++index; 
        }
    }

    #ifdef DEBUG
        for (int index = 1; index <= num_through_box; ++index) {
            printf("Through Box %d is %s.\n", index, box_to_string(through_box_list[index -1]));
        }
    #endif

    {
        int index = 1;
        while (index <= num_through_box) // until end of through box list  
        {
            printf("%d\n", box_get_volume(through_box_list[index -1])); 
            
            ++index; 
        }
    }
}