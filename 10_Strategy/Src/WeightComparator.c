/*
 * WeightComparator.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <WeightComparator.h>

typedef struct WeightComparatorStruct {
    Comparator interface;
} WeightComparatorStruct;

static int16_t compare(Comparator *comparator, Human *human1, Human *human2) {
    int16_t ret = 0;
    if (human1->weight > human2->weight) {
        ret = 1;
    } else if (human1->weight == human2->weight) {
        ret = 0;
    } else {
        ret = -1;
    }

    return ret;
}

WeightComparator *WeightComparator_create() {
    WeightComparator *comparator = (WeightComparator*)malloc(sizeof(WeightComparator));
    comparator->interface.compare = compare;

    return comparator;
}

void WeightComparator_destroy(WeightComparator *comparator) {
    free(comparator);
}
