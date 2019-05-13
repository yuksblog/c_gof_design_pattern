/*
 * HeightComparator.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef HEIGHTCOMPARATOR_H_
#define HEIGHTCOMPARATOR_H_

#include <stdlib.h>
#include <Comparator.h>

typedef struct HeightComparatorStruct HeightComparator;

extern HeightComparator *HeightComparator_create();

extern void HeightComparator_destroy(HeightComparator *comparator);

#endif /* HEIGHTCOMPARATOR_H_ */
