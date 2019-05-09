/*
 * StudentLinkedIterator.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_LINKEDSTUDENTITERATOR_H_
#define ITERATOR_LINKEDSTUDENTITERATOR_H_

#include <stdlib.h>

#include <Aggregate.h>
#include <LinkedStudentPrivate.h>

typedef struct LinkedStudentIteratorStruct LinkedStudentIterator;

extern LinkedStudentIterator *LinkedStudentIterator_create();

extern void LinkedStudentIterator_destroy(LinkedStudentIterator *ite);

extern void LinkedStudentIterator_reset(LinkedStudentIterator *ite, LinkedStudent *start);

#endif /* ITERATOR_LINKEDSTUDENTITERATOR_H_ */
