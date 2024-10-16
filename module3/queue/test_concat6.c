/* 
 * test_concat6.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-14-2024
 * Version: 1.0
 * 
 * Description: qconcat test on null q1
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
    // car_t *car4_p = make_car("Ford Bronco", 34000, 2023);
    // car_t *car5_p = make_car("Toyota Prius", 28545, 2023);

    
    queue_t *qp_2 = qopen();

    // Assume qput is valid
    qput(qp_2, car_p);
    qput(qp_2, car2_p);
    qput(qp_2, car3_p);

    qconcat(qp_2, NULL);

    // Assume qget is working
    if (qget(qp_2) == car_p && qget(qp_2) == car2_p && qget(qp_2) == car3_p && qget(qp_2) == NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}
