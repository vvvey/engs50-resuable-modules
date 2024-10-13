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

int main() {
    queue_t *qp = qopen();

    // Assume qput is valid
    
    if (qget(qp) == NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}