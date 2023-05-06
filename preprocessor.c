/****************************************
 * preprocessor -- học hỏi về preprocessor trong C cũng 
 *          như chơi đùa với nó một chút 
 * 
 * PURPOSE: làm quen với preprocessor 
 * 
 * STATUS: code chạy đúng 
 * 
 * SOURCE: example 10 - 2 - practical C
 * 
*/
#include <stdio.h>


const int SIZE = 10; /* max size of array */

int data[SIZE]; /* some data */
int twice[SIZE]; /* twice some data */

int main(void) {
    {
        int index; /* index to data list and twice list */

        index = 1; 

        while(1)
        {
            if (index > SIZE) {
                break; 
            }

            data[index -1] = index; 
            twice[index -1] = data[index -1] * 2; 

            ++index; 
        }
    }

    {
        int index = 1;
        printf("data | twice:\n"); 

        while (1)
        {   
            if (index > SIZE) {
                break; 
            }
            printf("%d  %d\n", data[index -1], twice[index -1]); 

            ++index;    
        }
    }

}