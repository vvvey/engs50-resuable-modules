/* 
 * test_apply1.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-15-2024
 * Version: 1.0
 * 
 * Description: Test for happly
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "hash.h"

#define MAX_NAME_LENGTH 100
#define MAX_ID_LENGTH 8

typedef struct {
    int age;                  // Age of the student
    char studentID[MAX_ID_LENGTH];  // Student ID
    char name[MAX_NAME_LENGTH]; // Name of the student
} student_t;

student_t *make_student(char* namep, int age, char* studentIDp ){
    student_t *sp;

    if (!(sp = (student_t *)malloc(sizeof(student_t)))) {
        printf("[Error: malloc failed allocating student]\n");
        return NULL;
    }

    strcpy(sp->name, namep);
    sp->age = age;
    strcpy(sp->studentID, studentIDp);

    return sp;
}

void increaseAge(student_t* sp) {
    sp->age = sp->age + 1;
}

int main() {
    student_t *person1 = make_student("John Smith", 21, "f0011d");
    student_t *person2 = make_student("Sarah Connor", 19, "f0022d");
    student_t *person3 = make_student("Emily Davis", 23, "f012jg");

    hashtable_t *htp = hopen(100);

    int keylen = 6;
    hput(htp, person1, person1->studentID, keylen);
    hput(htp, person2, person2->studentID, keylen);
    hput(htp, person3, person3->studentID, keylen);

    happly(htp, (void (*)(void *))increaseAge);

    // Assume hput if working properly
    if (person1->age == 22 && person2->age == 20 && person3->age == 24) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}
