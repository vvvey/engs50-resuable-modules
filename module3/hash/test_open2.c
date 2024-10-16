/* 
 * test_open1.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-15-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "hash.h"
#include "../queue/queue.h"

int main() {

    hashtable_t *htp = (hashtable_t*)hopen(-3);

    if (htp == NULL) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}