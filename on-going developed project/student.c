/***************************************************
 * student -- định nghĩa cho hộp chứa dữ liệu tổng quan 
 *      học sinh 
 * 
 * PURPOSE: mình muốn thử bỏ xâu vào trong các thông tin 
 *      đặc điểm của biến tổng quan học sinh, nhằm phục vụ 
 *      cho dự án PBL trên trường mình 
 * 
 * STATUS: hoàn thành mục đích 
 * 
*/
#include "setting.h"
#include <string.h>
#include <stdlib.h>

struct student {
    char name[100]; /* name of student */
    int age; /* age of student */
}; 

typedef struct student student; 

/************************************
 * student_template -- tạo 1 giá trị mẫu để gán vào 
 *      biến tổng quan hoc sinh - student 
 * 
 * example: student_template("Tung", 20) --> student: \n name: Tung \n age: 20
 * 
*/
student student_template(char* nameV, int ageV) {
    student result; 

    strcpy(result.name, nameV); 
    result.age = ageV; 

    #ifdef DEBUG
        printf("The student:\nName: %s\nAge: %d.\n", result.name, result.age); 
    #endif

    return result; 
}

/*********************************************
 * student_to_string -- thể hiện giá trị của biến chứa
 *             giá trị ngày tháng bằng xâu kí tự
 * 
 * example: 
 *      student birth = student_template(28, 10, 2002); 
 *      student_to_string(birth) --> "student(28/10/2002)"
*/
char* student_to_string(student studentV) {
    char* result; 
    result = (char*)malloc(100); 

    strcpy(result, "Student:\n");

    #ifdef DEBUG
        printf("%s.\n", result); 
    #endif

    return result; 
}


int main(void) {
    student stud_tung; 

    char name[] = "Tung"; 

    stud_tung = student_template(name, 20); 
}

