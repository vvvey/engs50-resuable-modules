/* 
 * test_get4.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-13-2024
 * Version: 1.0
 * 
 * Description: Write Test Files for qget for null queue pointer
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "queue.h"

int main() {
    if (qget(NULL) == NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}