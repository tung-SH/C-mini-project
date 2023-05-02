/*************************************************************
 * print_mailing -- print the mailing info
 * 
 * SOURCE: exercise - practical c - advanced types
 * 
 * STATUS: run well
*************************************************************/


#include <stdio.h>
#include "mailing.c"

#define MAX_ENTRIES 3

void print_mailing(Mailing); 

int main(void) {
    Mailing list[MAX_ENTRIES] = {
        {"Tung", "1a", "DN", 106200283},
        {"Vinh", "2b", "DN", 107200389},
        {"Phuc", "3c", "DN", 110789897}
    }; 

    

    {
        int index = 1; 
        while (1) {
            printf("The mailing info %d\n----------------\n", index); 
            print_mailing(list[index -1]); 

            ++index; 
            if (index > MAX_ENTRIES) {
                break; 
            }
        }
    }


}

/*********************************************************
 * print_mailing -- print the information of mailing
 * 
 * parameter: 
 *      mailing -- the mailing 
 * 
**********************************************************/
void print_mailing(Mailing mailing) {
    printf("Name: %s\nAddress: %s\nCity: %s\nZip code: %ld\n", mailing.name, mailing.address, mailing.city, mailing.zip); 
}