/*
 * QuickSortImpl.c
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include <QuickSortImpl.h>

typedef struct QuickSortImplStruct {
    SortImpl super;
} QuickSortImplStruct;

static void sort(SortImpl *impl, uint16_t *list) {
    // do quick sort
}

QuickSortImpl *QuickSortImpl_create() {
    QuickSortImpl *quick = (QuickSortImpl*)malloc(sizeof(QuickSortImpl));
    quick->super.sort = sort;

    return quick;
}

void QuickSortImpl_destroy(QuickSortImpl *impl) {
    free(impl);
}
