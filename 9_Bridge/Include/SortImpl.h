/*
 * SorterImpl.h
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */
#ifndef SORTIMPL_H_
#define SORTIMPL_H_

#include <stdint.h>

typedef struct SortImpl {
    void (*sort)(struct SortImpl *impl, uint16_t *list);
} SortImpl;

extern void SortImpl_sort(SortImpl *impl, uint16_t *list);

#endif /* SORTIMPL_H_ */
