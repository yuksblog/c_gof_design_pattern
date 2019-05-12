/*
 * TimerSorter.c
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include <TimerSorter.h>

typedef struct TimerSorterStruct {
    Sorter super;
} TimerSorterStruct;

TimerSorter *TimerSorter_create(SortImpl *impl) {
    TimerSorter *sorter = (TimerSorter*)malloc(sizeof(TimerSorter));
    sorter->super.impl = impl;

    return sorter;
}

void TimerSorter_destroy(TimerSorter *sorter) {
    free(sorter);
}

void TimerSorter_timerSort(TimerSorter *sorter, uint16_t *list) {
    clock_t start = clock();
    SortImpl_sort(sorter->super.impl, list);
    clock_t end = clock();
    printf("elapsed time = %ld\n", (end - start));
}
