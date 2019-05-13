/*
 * AgeComparator.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef AGECOMPARATOR_H_
#define AGECOMPARATOR_H_

#include <stdlib.h>
#include <Comparator.h>

typedef struct AgeComparatorStruct AgeComparator;

extern AgeComparator *AgeComparator_create();

extern void AgeComparator_destroy(AgeComparator *comparator);

#endif /* AGECOMPARATOR_H_ */
