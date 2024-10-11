/* 
 * test_open1.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-10-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "queue.h"

#define MAXREG 10

/* the representation of a car */
typedef struct car {
	struct car *next;
	char plate[MAXREG];
	double price;
	int year;
} car_t;

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
    
    if (qopen() != NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}