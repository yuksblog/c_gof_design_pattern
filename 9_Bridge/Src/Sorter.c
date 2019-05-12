/*
 * Sorter.c
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include <SorterPrivate.h>

Sorter *Sorter_create(SortImpl *impl) {
    Sorter *sorter = (Sorter*)malloc(sizeof(Sorter));
    sorter->impl = impl;

    return sorter;
}

void Sorter_destroy(Sorter *sorter) {
    free(sorter);
}

void Sorter_sort(Sorter *sorter, uint16_t *list) {
    SortImpl_sort(sorter->impl, list);
}
