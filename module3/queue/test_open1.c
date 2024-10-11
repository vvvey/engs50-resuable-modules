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

int main() {
    
    if (qopen() != NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}