/***************************************
 * package_queue -- định nghĩa cho giá trị 
 *      1 danh sách kiện hàng 
 * 
 * PURPOSE: tạo ra loại đữ liệu mới mẻ - DANH SÁCH kiện hàng
 *          đồng thời tạo cơ sở cho việc giải quyết bài toán 
 *          post transition trong hackerrank 
 * 
 * STATUS: 
 * 
 * SOURCE: 
 * 
*/
#include "package.c"
#include "setting.h"

struct package_queue {
    int num_package; /* number of packages */
    package* packages; /* the list of packages */
}; 

typedef struct package_queue package_queue; 

/************************************
 * package_queue_template -- tạo ra giá trị danh sách kiện hàng 
 *      mẫu để gán vào biến tổng quan danh sách kiện hàng - package_queue
 * 
*/
package_queue package_queue_template(int num_packageV, package* packagesV) {
    package_queue result; 

    result.num_package = num_packageV;
    result.packages = (package*)malloc(result.num_package * sizeof(package)); 

    result.packages = packagesV; 

    #ifdef DEBUG
        printf("Package queue has %d packages\n", result.num_package); 

        {
            int index = 1; 

            while(1)
            {
                if (index > result.num_package) {
                    break; 
                }

                printf("%s\n", package_to_string(result.packages[index -1]));

                ++index;  
            }
        }

    #endif 

    return result; 
}


int main(void) {
    package_queue pq; 

    {
        package packages[3]; 
        char id[] = "id_1"; 
        packages[1 -1] = package_template(id, 10); 
        strcpy(id, "id_2"); 
        packages[2 -1] = package_template(id, 20); 
        strcpy(id, "id_3");
        packages[3 -1] = package_template(id, 30);

        pq = package_queue_template(3, packages); 
    }
}

