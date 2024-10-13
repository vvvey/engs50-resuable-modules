/* 
 * queue.c --- 
 * 
 * Author: Samuel R. Hirsh and Vuthy Vey
 * Created: 10-10-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

/* queue node data type */
typedef struct node {
	struct node *next;
	void *data;
} node_t;

/* queue holding two pointers */
typedef struct queue {
	node_t *front;
	node_t *back;
} pq_t;

/* create an empty queue */
queue_t* qopen(void) {
	pq_t *qp = (pq_t*)malloc(sizeof(pq_t));
	if (qp == NULL) {
		return NULL;
	}

	qp->front = NULL;
	qp->back = NULL;
	return (queue_t*)qp;
}

/* deallocate a queue, frees everything in it */
void qclose(queue_t *qp) {

}

/* put element at the end of the queue
 * returns 0 is successful; nonzero otherwise 
 */
int32_t qput(queue_t *qp, void *elementp) {
	
	if (qp == NULL || elementp == NULL) {
		return -1;
	}
	//  Cast queue type
	pq_t *the_q = (pq_t *)qp;
	
	// Create new node
	node_t *nodep = (node_t *)malloc(sizeof(node_t));
	if (nodep == NULL) {
		return -1; // Failed to allocate memory
	}

	nodep->data = elementp; // Assign the data to the new node
	nodep->next = NULL; 

	if (the_q->front == NULL && the_q->back == NULL) {
		// Queue is empty
		the_q->front = nodep; 
		the_q->back = nodep;
	} else {
		// Queue not empty
		the_q->back->next = nodep;
		the_q->back = nodep;
	}

	return 0; // Success
}

/* get the first first element from queue, removing it from the queue */
void* qget(queue_t *qp) {
	
}

/* apply a function to every element of the queue */
void qapply(queue_t *qp, void (*fn)(void* elementp)) {
	
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
	
}

/* search a queue using a supplied boolean function (as in qsearch),
 * removes the element from the queue and returns a pointer to it or
 * NULL if not found
 */
void* qremove(queue_t *qp,
							bool (*searchfn)(void* elementp,const void* keyp),
							const void* skeyp) {
	
}

/* concatenatenates elements of q2 into q1
 * q2 is dealocated, closed, and unusable upon completion 
 */
void qconcat(queue_t *q1p, queue_t *q2p) {
	
}

