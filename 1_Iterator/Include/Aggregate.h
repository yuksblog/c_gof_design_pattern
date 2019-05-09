/*
 * Aggregate.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_AGGREGATE_H_
#define ITERATOR_AGGREGATE_H_

#include <Iterator.h>

typedef struct Aggregate {
    Iterator *(*iterator)(struct Aggregate *agr);
} Aggregate;

extern Iterator *Aggregate_iterator(Aggregate *agr);

#endif /* ITERATOR_AGGREGATE_H_ */
