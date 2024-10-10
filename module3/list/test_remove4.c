/* 
 * lremove_test2.c --- 
 * 
 * Author: Sam Hirsh, and Vuthy Vey
 * Created: 10-05-2024
 * Version: 1.0
 * 
 * Description: Test to remove the first car in the list
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
    car_t *car2_p = make_car("RB20", 30000, 2024);
    car_t *car3_p = make_car("Jeep Wrangler Sahara", 55000, 2024);
    car_t *car4_p = make_car("Ford Bronco", 34000, 2023);
    car_t *car5_p = make_car("Toyota Prius", 28545, 2023);

    lput(car_p);
    lput(car2_p);
    lput(car3_p);
    lput(car4_p);
    lput(car5_p);

    car_t *test_car = lremove("Toyota Prius"); // Toyota Prius is first in the list

    if (test_car == car5_p) { // car5_p is Toyota Prius
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
    
}