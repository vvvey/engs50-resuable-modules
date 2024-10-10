/* 
 * lapply_test1.c --- 
 * 
 * Author: Samuel R. Hirsh
 * Created: 10-07-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdint.h>
#include <string.h>
#include "list.h"

car_t *make_car(char *platep, double price, double year) {
    car_t *cp;

    if (!(cp = (car_t *)malloc(sizeof(car_t)))) {
        printf("[Error: malloc failed allocating car]\n");
        return NULL;
    }

    cp->next = NULL;
    strcpy(cp->plate, platep);
    cp->price = price;
    cp->year = year;
    return cp;
}


void increase_price(car_t *cp) {
    cp->price += 100;
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

    lapply(increase_price);
    lapply(increase_price);
		
    if (car_p->price == 10200 && car2_p->price == 30200 && car3_p->price == 55200 && car4_p->price == 34200 && car5_p->price == 28745) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}

