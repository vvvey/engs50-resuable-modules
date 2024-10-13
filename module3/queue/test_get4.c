/* 
 * test_get2.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-13-2024
 * Version: 1.0
 * 
 * Description: Write Test Files for qget
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

int main() {
    car_t *car_p = make_car("Honda Civic", 10000, 2018);
    car_t *car2_p = make_car("RB20", 30000, 2024);
    car_t *car3_p = make_car("Jeep Wrangler Sahara", 55000, 2024);

    queue_t *qp = qopen();

    qput(qp, car_p);
    qput(qp, car2_p);
    qput(qp, car3_p);

    // Assume qput is valid
    
    if (qget(qp) == car_p && qget(qp) == car2_p && qget(qp) == car3_p) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}