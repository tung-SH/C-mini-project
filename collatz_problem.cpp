#include <iostream>
// #include "type_writing_effect.cpp"
using namespace std; 

bool isEven(int num);
int collatz_num(int num); 
void wait_1ms(int msec); 

int main(void) {
    int a[1000];
    int i = 0; 
    cout << "Please enter the first number: "; cin >> a[i]; 

    // hien so tiep theo trong collatz cho den khi gap 1 thi cho 5s 
    int count1 = 0; 
    do {
        i++; 
        a[i] = collatz_num(a[i - 1]); 
        cout << "Next collatz num: " << a[i] << endl; 
        wait_1ms(350); 
        if (a[i] == 1) {count1++;}
    } while (count1 < 3); 

    wait_1ms(5000); 

    return 0; 
}


/** program to check if the number is even or not
 * 
*/
bool isEven(int num) {
    return (num % 2 == 0);
}


/** program to return the next num in collatz sequence number
 * 
*/
int collatz_num(int num) {
    int result; 

    if (isEven(num)) {
        result = (num / 2); 
    } else {
        result = (num * 3 + 1);
    }

    return result; 
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