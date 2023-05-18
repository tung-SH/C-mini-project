/*************************************
 * book_list -- tạo giá trị danh sách cho nhà kho 
 *      chứa các hộp theo thứ tự 
 * 
 * PURPOSE: 
 *      1. làm nền tảng để biết cách tạo hàm nhập giá trị 
 *          bằng file cho chương trình PBL
 *      2. tạo giá trị danh sách hộp và 3 hàm cơ bản 
 *  
 * STATUS: 
 * 
 * SOURCE: môn học PBL 
*/

#include "setting.h"
#include "box.c"

const int MAX_BOXS = 500; /* MAX NUMBER OF BOX IN LIST */

struct box_list {
    int num_box; /* number of box in list */
    box* boxs; /* actual box list */
};

typedef struct box_list box_list; 

/******************************************
 * box_list_template -- tạo giá trị mẫu cho 
 *      danh sách sách nhằm gán vào biến chứa
 *      giá trị danh sách sách 
 * 
 *  
*/
box_list box_list_template(int num_boxsV, box* boxsV) {
    box_list result; 

    result.num_box = num_boxsV; 
    result.boxs = (box*)malloc(MAX_BOXS * sizeof(box)); 
	
	
    for (int i = 1; i <= num_boxsV; ++i) {
        result.boxs[i -1] = boxsV[i -1];  
    }

    #ifdef DEBUG3
    {
        printf("-------------------BOX LIST----------------\n"); 
        for (int i = 1; i <= result.num_box; ++i) {
            printf("%d: %s\n", i, box_to_string(result.boxs[i -1])); 
        }
    }
    #endif

    return result; 
}

/****************************************
 * box_list_to_string -- thể hiện giá trị danh sách 
 *      sách 
 * 
*/
char* box_list_to_string(box_list box_listV) {
    char* result; 
    result = (char*)malloc(MAX_LENGTH); 

    strcpy(result, "---------------------BOX LIST-----------------\n"); 
    for (int i = 1; i <= box_listV.num_box; ++i) {
        strcat(result, itos(i)); 
        strcat(result, ": "); 
        strcat(result, box_to_string(box_listV.boxs[i -1])); 
        strcat(result, "\n");
    }

    #ifdef DEBUG3
        printf("%s", result); 
    #endif

    return result; 
}

box_list box_list_tempate_by_file(const char* file_name) {
    box_list result; 

    FILE* file_box_list; 
    file_box_list = fopen(file_name, "r");






    fclose(file_box_list);
    return result; 
}



#ifdef DEBUG3

int main(void) {
    box_list nha_kho;

    {
        box boxs[4]; 
        boxs[1 -1] = box_template(1, 2, 3); 
        boxs[2 -1] = box_template(3, 3, 3); 
        boxs[3 -1] = box_template(4, 4, 4); 
        boxs[4 -1] = box_template(5, 5, 5); 

        nha_kho = box_list_template(4, boxs); 
        

        box_list_to_string(nha_kho); 
    }  
    
}

#endif 
