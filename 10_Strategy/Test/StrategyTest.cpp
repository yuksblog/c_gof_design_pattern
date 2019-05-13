/*
 * StrategyTest.cpp
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <MyClass.h>
#include <AgeComparator.h>
#include <HeightComparator.h>
#include <WeightComparator.h>
}

TEST_GROUP(Strategy) {
};

TEST(Strategy, AgeComparator) {
    AgeComparator *comparator = AgeComparator_create();
    MyClass *myClass = MyClass_create((Comparator*)comparator);

    Human *human1 = Human_create('A', 170, 60, 20);
    Human *human2 = Human_create('B', 165, 50, 22);

    CHECK_EQUAL(-1, MyClass_compare(myClass, human1, human2));

    Human_destroy(human1);
    Human_destroy(human2);

    AgeComparator_destroy(comparator);
    MyClass_destroy(myClass);
}

TEST(Strategy, HeightComparator) {
    HeightComparator *comparator = HeightComparator_create();
    MyClass *myClass = MyClass_create((Comparator*)comparator);

    Human *human1 = Human_create('A', 170, 60, 20);
    Human *human2 = Human_create('B', 165, 50, 22);

    CHECK_EQUAL(1, MyClass_compare(myClass, human1, human2));

    Human_destroy(human1);
    Human_destroy(human2);

    HeightComparator_destroy(comparator);
    MyClass_destroy(myClass);
}

TEST(Strategy, WeightComparator) {
    WeightComparator *comparator = WeightComparator_create();
    MyClass *myClass = MyClass_create((Comparator*)comparator);

    Human *human1 = Human_create('A', 170, 60, 20);
    Human *human2 = Human_create('B', 165, 50, 22);

    CHECK_EQUAL(1, MyClass_compare(myClass, human1, human2));

    Human_destroy(human1);
    Human_destroy(human2);

    WeightComparator_destroy(comparator);
    MyClass_destroy(myClass);
}
