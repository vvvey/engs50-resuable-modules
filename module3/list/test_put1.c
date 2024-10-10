/* 
 * lput_test1.c --- 
 * 
 * Author: Sam Hirsh, and Vuthy Vey
 * Created: 10-05-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "list.h"


car_t *make_car(char *platep,double price,double year)  { 
	car_t *cp;

	if(!(cp = (car_t*)malloc(sizeof(car_t)))) {
        printf("[Error: malloc failed allocating car]\n");
        return NULL;
    }

	cp->next = NULL;
 	strcpy(cp->plate,platep);
	cp->price=price; 
	cp->year=year; 
	return cp;
}


int main() {
    car_t *car_p = make_car("Honda Civic", 10000, 2018);

    if (lput(car_p) == 0) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
    
}