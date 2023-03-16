#include <iostream>
using namespace std;

int to_hop(int a, int b);
int day_thua(int a);
int possible_ways(int ball_type, int ball[], int box);

int main(void) {
    int ball[8] = {3, 3, 1, 1, 1, 1, 1, 1};

    int box = 12; 
    int ball_type = 8; 

    cout << possible_ways(ball_type, ball, box);

    return 0; 
}



/* program to calculate the to hop aCb
*
*/
int to_hop(int a, int b) {
    int result; 

    result = (day_thua(a)) / (day_thua(a - b) * day_thua(b));

    return result; 
}


/** program to calculate the n! 
 * 
*/
int day_thua(int a) {
    int result = 1; 

    for (int i = 1; i <= a; i++) {
        result *= i; 
    }

    return result; 
}


/** program to calculate the number of possible ways to put 'a' type of ball into 'b' box
 * 
*/
int possible_ways(int ball_type, int ball[], int box) {
    int result = 1; 

    int i = 0; 
    int j = box;
    while (i <= ball_type - 1) {
        result *= to_hop(j, ball[i]);
        j -= ball[i];
        i++; 

    }

    return result; 
}