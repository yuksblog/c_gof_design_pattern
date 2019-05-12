/*
 * QucikSortImpl.h
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */
#ifndef QUICKSORTIMPL_H_
#define QUICKSORTIMPL_H_

#include <stdlib.h>
#include <SortImpl.h>

typedef struct QuickSortImplStruct QuickSortImpl;

extern QuickSortImpl *QuickSortImpl_create();

extern void QuickSortImpl_destroy(QuickSortImpl *impl);

#endif /* QUICKSORTIMPL_H_ */
