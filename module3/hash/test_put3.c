/* 
 * test_put3.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-15-2024
 * Version: 1.0
 * 
 * Description: Test for invalid hashtable on hput
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "hash.h"

int main() {
 
    // Test for invalid hashtable
    if (hput(NULL, "Element", "key", 3) != 0) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}
