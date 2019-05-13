/*
 * AgeComparator.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <AgeComparator.h>

typedef struct AgeComparatorStruct {
    Comparator interface;
} AgeComparatorStruct;

static int16_t compare(Comparator *comparator, Human *human1, Human *human2) {
    int16_t ret = 0;
    if (human1->age > human2->age) {
        ret = 1;
    } else if (human1->age == human2->age) {
        ret = 0;
    } else {
        ret = -1;
    }

    return ret;
}

AgeComparator *AgeComparator_create() {
    AgeComparator *comparator = (AgeComparator*)malloc(sizeof(AgeComparator));
    comparator->interface.compare = compare;

    return comparator;
}

void AgeComparator_destroy(AgeComparator *comparator) {
    free(comparator);
}
