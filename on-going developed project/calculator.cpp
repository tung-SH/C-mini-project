#include <stdio.h>


void calculator(void); 
float calculate_simple_expression(int, char, int); 

int main(void) {
    calculator(); 

}

// program to calculate the expression "op1 sign op2"
float calculate_simple_expression(int op1, char sign, int op2) {
    float result; 

    switch (sign) {
        case '+' : 
            result = op1 + op2; 
            break;
        case '-' : 
            result = op1 - op2; 
            break; 
        
        case '*' : 
            result = op1 * op2; 
            break; 
        
        case '/' : 
            result = op1 / float(op2); 
            break; 
    }

    return result; 
}

/* program function like a calculator 
    1. let user enter the expression on the command line
    2. calculate the result 
    3. print the result on the command lind   
*/
void calculator(void) {
    int op1; /* the first operator */ 
    int op2; /* the second operator */
    char sign; /* the sign of the math expression */
    float result; /* the result of the expression */

    // 1
    printf("Please enter the expression: "); scanf("%d %c %d", &op1, &sign, &op2); 
    
    // 2
    result = calculate_simple_expression(op1, sign, op2); 

    // 3
    printf("Result = %f", result); 
}