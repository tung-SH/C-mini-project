/*********************************************
 * prime_number -- find the nth prime number 
 * 
 * STATUS: 
 * 
 * SOURCE: 
 * 
*/

// #include "setting.h"
#include <math.h>

/****************************
 * is_primt -- check if the input 
 *          number is prime number or not
 * 
 * example:
 *      is_prime(17) --> 1
 *      is_prime(20) --> 0
**********************************/
int is_prime(int number) {
    int result; 

    {
        int divisor = 2; 

        while (1)
        {
            if (number % divisor == 0) {
                result = 0; 
                break; 
            }

            if (divisor > (int)sqrtf(number)) {
                result = 1; 
                break; 
            }

            ++divisor; 
        }
    }

    #ifdef DEBUG
        if (result == 1) {
            printf("The number %d is prime number.\n", number);
        } else {
            printf("The number %d is not prime number.\n", number); 
        }
    #endif

    return result; 
}

/*************************************************
 * nth_prime_number -- calc the nth prime number 
 * 
 * example: 
 *      nth_prime_number(1) --> 2
 *      nth_prime_number(3) --> 5
 *      nth_prime_number(40) --> 173
*/
int nth_prime_number(int nth) {
    int result; 

    if (nth == 1) {
        result = 2; 
    } else {
        result = nth_prime_number(nth - 1) + 1; 
        
        while(1)
        {
            if (is_prime(result)) {
                break; 
            } else {
                ++result; 
            }
        }

    }

    #ifdef DEBUG 
        printf("The %dth prime number is %d.\n", nth, result); 
    #endif

    return result; 
}

