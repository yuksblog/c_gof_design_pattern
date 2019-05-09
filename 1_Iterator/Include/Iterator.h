/*
 * Iterator.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_ITERATOR_H_
#define ITERATOR_ITERATOR_H_

#include <stdbool.h>
#include <stdint.h>

typedef struct Iterator {
    bool (*hasNext)(struct Iterator *ite);
    void *(*next)(struct Iterator *ite);
} Iterator;

extern bool Iterator_hasNext(Iterator* ite);

extern void *Iterator_next(Iterator* ite);

#endif /* ITERATOR_ITERATOR_H_ */
