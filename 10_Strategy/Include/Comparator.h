/*
 * Comparator.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef COMPARATOR_H_
#define COMPARATOR_H_

#include <Human.h>

typedef struct Comparator {
    int16_t (*compare)(struct Comparator *comparator, Human *human1, Human *human2);
} Comparator;

extern int16_t Comparator_compare(Comparator *comparator, Human *human1, Human *human2);

#endif /* COMPARATOR_H_ */
