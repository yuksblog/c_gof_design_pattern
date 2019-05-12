/*
 * TimerSorter.h
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */
#ifndef TIMERSORTER_H_
#define TIMERSORTER_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SorterPrivate.h>

typedef struct TimerSorterStruct TimerSorter;

extern TimerSorter *TimerSorter_create(SortImpl *impl);

extern void TimerSorter_destroy(TimerSorter *sorter);

extern void TimerSorter_timerSort(TimerSorter *sorter, uint16_t *list);

#endif /* TIMERSORTER_H_ */
