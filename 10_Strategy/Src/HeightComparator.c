/*
 * HeightComparator.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <HeightComparator.h>

typedef struct HeightComparatorStruct {
    Comparator interface;
} HeightComparatorStruct;

static int16_t compare(Comparator *comparator, Human *human1, Human *human2) {
    int16_t ret = 0;
    if (human1->height > human2->height) {
        ret = 1;
    } else if (human1->height == human2->height) {
        ret = 0;
    } else {
        ret = -1;
    }

    return ret;
}

HeightComparator *HeightComparator_create() {
    HeightComparator *comparator = (HeightComparator*)malloc(sizeof(HeightComparator));
    comparator->interface.compare = compare;

    return comparator;
}

void HeightComparator_destroy(HeightComparator *comparator) {
    free(comparator);
}
