#include <stdio.h>

int isEven(int); 

int main(void) {
    printf("%d", isEven(4));

}

// program to check if the n number is even or not
int isEven(int n) {
    int result;

    result = (n % 2 == 0) ? 1 : 0; 

    return result; 
}
