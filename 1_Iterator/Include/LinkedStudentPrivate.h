/*
 * LinkedStudentPrivate.h
 *
 *  Created on: 2019/05/06
 *      Author: Yuk
 */

#ifndef ITERATOR_LINKEDSTUDENTPRIVATE_H_
#define ITERATOR_LINKEDSTUDENTPRIVATE_H_

#include <LinkedStudent.h>

typedef struct LinkedStudentStruct {
    Student super;
    struct LinkedStudentStruct *next;
} StructLinkedStudent;


#endif /* ITERATOR_LINKEDSTUDENTPRIVATE_H_ */
