/*
 * StudentLinkedIterator.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <LinkedStudentIterator.h>

typedef struct LinkedStudentIteratorStruct {
    Iterator interface;
    LinkedStudent *current;
} LinkedStudentIteratorStruct;



static bool hasNext(Iterator *ite) {
    LinkedStudentIterator *sli = (LinkedStudentIterator*)ite;

    bool ret = false;
    if (sli->current != NULL) {
        ret = true;
    }
    return ret;
}

static void *next(Iterator *ite) {
    LinkedStudentIterator *sli = (LinkedStudentIterator*)ite;

    LinkedStudent *tmp = sli->current;
    sli->current = sli->current->next;

    return tmp;
}



LinkedStudentIterator *LinkedStudentIterator_create() {
    LinkedStudentIterator *ite = (LinkedStudentIterator*)malloc(sizeof(LinkedStudentIterator));
    ite->interface.hasNext = hasNext;
    ite->interface.next = next;
    ite->current = NULL;

    return ite;
}

void LinkedStudentIterator_destroy(LinkedStudentIterator *ite) {
    free(ite);
}

void LinkedStudentIterator_reset(LinkedStudentIterator *ite, LinkedStudent *start) {
    ite->current = start;
}
