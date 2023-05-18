/****************************************
 * new -- nơi thử code mới 
 * 
*/

#include <stdio.h>

int main(void) {
    int count = 0; 

    int n = 15; /* loop time */

    // for (int i = 1; i <= n; ++i) {
    //     ++count; 
    // }

    {
        int i = 1; // initial statement 
        while (i <= n) // condition 
        {
            ++count; // body 
            ++i; // iteration statement 
        }
    }

    printf("count is %d", count); 
}