/*
 * Sorter.h
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */
#ifndef SORTER_H_
#define SORTER_H_

#include <stdlib.h>
#include <SortImpl.h>

typedef struct SorterStruct Sorter;

extern Sorter *Sorter_create(SortImpl *impl);

extern void Sorter_destroy(Sorter *sorter);

extern void Sorter_sort(Sorter *sorter, uint16_t *list);

#endif /* SORTER_H_ */
