/*
 * StudentLinkedList.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <LinkedStudentList.h>

typedef struct LinkedStudentListStruct {
    Aggregate interface;
    LinkedStudent *start;
    LinkedStudentIterator *ite;
} LinkedStudentListStruct;




static Iterator *iterator(Aggregate *agr) {
    LinkedStudentList *students = (LinkedStudentList*)agr;

    LinkedStudentIterator_reset(students->ite, students->start);
    return (Iterator*)students->ite;
}



LinkedStudentList *LinkedStudentList_create() {
    LinkedStudentList *list = (LinkedStudentList*)malloc(sizeof(LinkedStudentList));
    list->interface.iterator = iterator;
    list->start = NULL;
    list->ite = LinkedStudentIterator_create();

    return list;
}

void LinkedStudentList_destroy(LinkedStudentList *students) {
    free(students);
}

void LinkedStudentList_addStudent(LinkedStudentList *students, LinkedStudent *student) {
    if (students->start == NULL) {
        students->start = student;
    } else {
        LinkedStudent *tmp = students->start;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = student;
    }
}
