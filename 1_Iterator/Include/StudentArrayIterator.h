/*
 * StudentIterator.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_STUDENTARRAYITERATOR_H_
#define ITERATOR_STUDENTARRAYITERATOR_H_

#include <Aggregate.h>
#include <StudentPrivate.h>

#include <stdlib.h>

typedef struct StudentArrayIteratorStruct StudentArrayIterator;

extern StudentArrayIterator *StudentArrayIterator_create(Student *list[]);

extern void StudentArrayIterator_destroy(StudentArrayIterator *ite);

extern void StudentArrayIterator_reset(StudentArrayIterator *ite, uint16_t size);

#endif /* ITERATOR_STUDENTARRAYITERATOR_H_ */
