/*
 * BubbleSortImpl.h
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */
#ifndef BUBBLESORTIMPL_H_
#define BUBBLESORTIMPL_H_

#include <stdlib.h>
#include <SortImpl.h>

typedef struct BubbleSortImplStruct BubbleSortImpl;

extern BubbleSortImpl *BubbleSortImpl_create();

extern void BubbleSortImpl_destroy(BubbleSortImpl *impl);


#endif /* BUBBLESORTIMPL_H_ */
