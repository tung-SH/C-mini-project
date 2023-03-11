#include <iostream>
using namespace std; 

void wait_1ms(int msec); 
void type_writing(char string[1000], int speed); 
int strlen(char string[]); 

int main(void) {
    type_writing("hello guys! ", 200); 
    wait_1ms(1000); 
    type_writing("This is my first type-writing program", 100);

    return 0; 
}

/** program to wait for msec ms before go to next statement
 * 
*/
void wait_1ms(int msec) {
    // in here: 1s = 500 000 000
    for (int j = 0; j <= msec - 1; j++) {
        int i = 0; 
        while (i < 643776) {
            i++; 
        }
    }
} 

int strlen(char string[]) {
    int result = 0; 
    while (string[result] != '\0') {
        result++; 
    }
    
    return result; 
}

void type_writing(char string[1000], int speed) {
    for (int i = 0; i <= strlen(string) - 1; i++) {
        cout << string[i]; 
        wait_1ms(speed);
    }
}