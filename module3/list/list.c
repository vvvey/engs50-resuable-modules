/* 
 * list.c --- 
 * 
 * Author: Sam Hirsh, and Vuthy Vey
 * Created: 10-05-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "list.h"

static car_t *front=NULL;

/* put(): place a car at the beginning of the list
 * returns 0 if successful; nonzero otherwise 
 */
int32_t lput(car_t *cp) {
    if (cp == NULL) {
        // Error
        return -1; 
    }

    cp->next = front;
    front = cp;
    // Success
    return 0; 
}

/* get(): remove and return the first car in the list;
 * return NULL if the list is empty
 */
car_t *lget() {
	if (front == NULL) {
		return NULL;
	}
	
	car_t *temp_front = front;
	front = front->next;
	return temp_front;
}


/* apply a function to every car in the list */
void lapply(void (*fn)(car_t *cp)) {

    car_t *p; 
    for (p = front; p!= NULL; p = p->next) {
        fn(p); // apply the function
    }

}

/* remove(): find, remove, and return any car with
 * the designated plate; return NULL if not present
 */
car_t *lremove(char *platep) {
	car_t *p, *f;

	for (p = front; p != NULL; p = p->next) {
		if (strcmp(p->plate, platep) == 0) {
			if (p == front) {
				front = p->next;
				return p;
			}
			
			f->next = p->next;
			return p;
		}
		
		f = p;
	}

    return NULL;
}






