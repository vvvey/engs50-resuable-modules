/* 
 * test_apply1.c --- 
 * 
 * Author: Vuthy Vey
 * Created: 10-13-2024
 * Version: 1.0
 * 
 * Description: Write Test Files for qapply
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "queue.h"

#define MAX_NAME_LENGTH 50

typedef struct {
    int age;                  // Age of the student
    int studentID;           // Student ID
    char name[MAX_NAME_LENGTH]; // Name of the student
} student_t;

student_t *make_student(char* namep, int age, int studentID ){
    student_t *sp;

    if (!(sp = (student_t *)malloc(sizeof(student_t)))) {
        printf("[Error: malloc failed allocating student]\n");
        return NULL;
    }

    strcpy(sp->name, namep);
    sp->age = age;
    sp->studentID = studentID;
    return sp;
}

void increaseAge(student_t* sp) {
    sp->age = sp->age + 1;
}

int main() {
    student_t *person1 = make_student("John Smith", 21, 1001);
    student_t *person2 = make_student("Sarah Connor", 19, 1009);
    student_t *person3 = make_student("Emily Davis", 23, 1010);

    queue_t *qp = qopen();

    qput(qp, person1);
    qput(qp, person2);
    qput(qp, person3);

    qapply(qp, increaseAge);

    if (person1->age == 22 && person2->age == 20 && person3->age == 24) {
        exit(EXIT_SUCCESS);
    } else {
        exit(EXIT_FAILURE);
    }
}