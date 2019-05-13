/*
 * WeightComparator.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef WEIGHTCOMPARATOR_H_
#define WEIGHTCOMPARATOR_H_

#include <stdlib.h>
#include <Comparator.h>

typedef struct WeightComparatorStruct WeightComparator;

extern WeightComparator *WeightComparator_create();

extern void WeightComparator_destroy(WeightComparator *comparator);

#endif /* WEIGHTCOMPARATOR_H_ */
