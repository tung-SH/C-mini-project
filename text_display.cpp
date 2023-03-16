#include "type_writing_effect.h"

struct text_displayed {
    char text[100]; 
    int speed;
    int delay; 
};

void assign_string(char text[], char a[]) {
    for (int i = 0; i <= strlen(a) - 1; ) {
        text[i] = a[i]; 
    }
}

int main(void) {
    


    text_displayed phrase; 
    phrase.speed = 100; 
    phrase.delay = 1000; 

    type_writing(phrase.text, phrase.speed); wait_1ms(phrase.delay); 



    return 0; 
}

