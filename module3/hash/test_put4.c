/* 
 * test_put4.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-15-2024
 * Version: 1.0
 * 
 * Description: // Test for invalid element on hput
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "hash.h"

int main() {
    hashtable_t* htp = hopen(10);

    // Test for invalid element
    if (hput(htp, NULL, "mykey" , 4) != 0) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}
