/*
 * StudentList.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <StudentArrayList.h>

#define Student_MAX                 10

typedef struct StudentArrayListStruct {
    Aggregate interface;
    Student *list[Student_MAX];
    int16_t last;
    StudentArrayIterator *ite;
} StudentArrayListStruct;



static Iterator *iterator(Aggregate *agr) {
    StudentArrayList *students = (StudentArrayList*)agr;

    StudentArrayIterator_reset(students->ite, students->last + 1);
    return (Iterator*)students->ite;
}



StudentArrayList *StudentArrayList_create() {
    StudentArrayList *students = (StudentArrayList*)malloc(sizeof(StudentArrayList));
    students->interface.iterator = iterator;
    students->last = -1;
    students->ite = StudentArrayIterator_create((Student**)students->list);

    return students;
}

void StudentArrayList_destroy(StudentArrayList *students) {
    free(students);
}

void StudentArrayList_addStudent(StudentArrayList *students, Student *student) {
    students->last++;
    students->list[students->last] = student;
}
