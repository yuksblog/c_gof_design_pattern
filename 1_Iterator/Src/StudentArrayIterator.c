/*
 * StudentIterator.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <StudentArrayIterator.h>

typedef struct StudentArrayIteratorStruct {
    Iterator interface;
    Student **list;
    uint16_t size;
    uint16_t index;
} StudentArrayIteratorStruct;

static bool hasNext(Iterator *ite) {
    StudentArrayIterator *si = (StudentArrayIterator*)ite;

    bool ret = false;
    if (si->size > 0 && si->index < si->size) {
        ret = true;
    }

    return ret;
}

static void *next(Iterator *ite) {
    StudentArrayIterator* si = (StudentArrayIterator*)ite;
    Student *next = &(*si->list[si->index]);
    si->index++;

    return next;
}

StudentArrayIterator *StudentArrayIterator_create(Student *list[]) {
    StudentArrayIterator *ite = (StudentArrayIterator*)malloc(sizeof(StudentArrayIterator));
    ite->interface.hasNext = hasNext;
    ite->interface.next = next;
    ite->list = list;
    ite->size = 0;
    ite->index = 0;

    return ite;
}

void StudentArrayIterator_destroy(StudentArrayIterator *ite) {
    free (ite);
}

void StudentArrayIterator_reset(StudentArrayIterator *ite, uint16_t size) {
    ite->index = 0;
    ite->size = size;
}
