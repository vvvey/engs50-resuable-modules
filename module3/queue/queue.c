/* 
 * queue.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-10-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdint.h>
#include <stdbool.h>
#include "queue.h"


/* create an empty queue */
queue_t* qopen(void) {
	return NULL;
}

/* deallocate a queue, frees everything in it */
void qclose(queue_t *qp) {
	return NULL;
}

/* put element at the end of the queue
 * returns 0 is successful; nonzero otherwise 
 */
int32_t qput(queue_t *qp, void *elementp) {
	return NULL;
}

/* get the first first element from queue, removing it from the queue */
void* qget(queue_t *qp) {
	return NULL;
}

/* apply a function to every element of the queue */
void qapply(queue_t *qp, void (*fn)(void* elementp)) {
	return NULL;
}

/* search a queue using a supplied boolean function
 * skeyp -- a key to search for
 * searchfn -- a function applied to every element of the queue
 *          -- elementp - a pointer to an element
 *          -- keyp - the key being searched for (i.e. will be 
 *             set to skey at each step of the search
 *          -- returns TRUE or FALSE as defined in bool.h
 * returns a pointer to an element, or NULL if not found
 */
void* qsearch(queue_t *qp, 
							bool (*searchfn)(void* elementp,const void* keyp),
							const void* skeyp) {
	return NULL;
}

/* search a queue using a supplied boolean function (as in qsearch),
 * removes the element from the queue and returns a pointer to it or
 * NULL if not found
 */
void* qremove(queue_t *qp,
							bool (*searchfn)(void* elementp,const void* keyp),
							const void* skeyp) {
	return NULL;
}

/* concatenatenates elements of q2 into q1
 * q2 is dealocated, closed, and unusable upon completion 
 */
void qconcat(queue_t *q1p, queue_t *q2p) {
	return NULL;
}

