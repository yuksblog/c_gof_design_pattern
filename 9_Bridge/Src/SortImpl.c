/*
 * SorterImpl.c
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include <SortImpl.h>

void SortImpl_sort(SortImpl *impl, uint16_t *list) {
    impl->sort(impl, list);
}
