/*
 * BridgeTest.cpp
 *
 *  Created on: 2019/05/12
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <TimerSorter.h>
#include <QuickSortImpl.h>
#include <BubbleSortImpl.h>
}

TEST_GROUP(Bridge) {
};

TEST(Bridge, Sorter) {
    QuickSortImpl *impl = QuickSortImpl_create();
    Sorter *sorter = Sorter_create((SortImpl*)impl);

    Sorter_sort(sorter, NULL);

    QuickSortImpl_destroy(impl);
    Sorter_destroy(sorter);
}

TEST(Bridge, TimerSorter) {
    BubbleSortImpl *impl = BubbleSortImpl_create();
    TimerSorter *sorter = TimerSorter_create((SortImpl*)impl);

    Sorter_sort((Sorter*)sorter, NULL);
    TimerSorter_timerSort(sorter, NULL);

    BubbleSortImpl_destroy(impl);
    TimerSorter_destroy(sorter);
}
