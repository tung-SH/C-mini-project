#include <stdio.h>

int last_digit(int); 

int main(void) {
    int num = 23; 

    printf("The last digit of the number %d is %d", num, last_digit(num)); 

}

// program to return the last digit of the a number 
int last_digit(int a) {
    int result; 

    result = a % 10; 

    return result; 
}