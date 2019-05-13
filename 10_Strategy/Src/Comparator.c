/*
 * Comparator.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <Comparator.h>

int16_t Comparator_compare(Comparator *comparator, Human *human1, Human *human2) {
    return comparator->compare(comparator, human1, human2);
}
