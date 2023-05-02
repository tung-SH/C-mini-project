#include <stdio.h>
#include <math.h>
#include "setting.h"

typedef struct {
    int x, y; /* coordinate of the point */
} Point2d; 

float distance; /* distance between 2 points */
float calc_distance(Point2d, Point2d); 
char line[100]; /* input line */
Point2d p1, p2; 

int main(void) {
    printf("Enter the point 1: "); 
    fgets(line, sizeof(line), stdin); sscanf(line, "%d %d", &(p1.x), &(p1.y));

    #ifdef DEBUG
        printf("x: %d, y = %d\n", p1.x, p1.y);  
    #endif 

    printf("Enter the point 2: "); 
    fgets(line, sizeof(line), stdin); sscanf(line, "%d %d", &p2.x, &p2.y); 

    #ifdef DEBUG
        printf("x: %d, y: %d\n", p2.x, p2.y); 
    #endif

    distance = sqrtf(
        (float)pow(p2.x - p1.x, 2) + (float)pow(p2.y - p1.y, 2)
    ); 
    
    printf("The distance between 2 point (%d,%d) and (%d,%d) is %f", p1.x, p1.y, p2.x, p2.y, distance); 

}