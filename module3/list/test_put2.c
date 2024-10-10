/* 
 * lput_test2.c --- 
 * 
 * Author: Sam Hirsh, and Vuthy Vey
 * Created: 10-05-2024
 * Version: 1.0
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "list.h"

int main() {
    car_t *my_car = NULL;

    if (lput(my_car) != 0) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}