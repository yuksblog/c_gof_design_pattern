/*
 * BubbleSortImpl.c
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include <BubbleSortImpl.h>

typedef struct BubbleSortImplStruct {
    SortImpl super;
} BubbleSortImplStruct;

static void sort(SortImpl *impl, uint16_t *list) {
    // do Bubble sort
}

BubbleSortImpl *BubbleSortImpl_create() {
    BubbleSortImpl *bubble = (BubbleSortImpl*)malloc(sizeof(BubbleSortImpl));
    bubble->super.sort = sort;

    return bubble;
}

void BubbleSortImpl_destroy(BubbleSortImpl *impl) {
    free(impl);
}
