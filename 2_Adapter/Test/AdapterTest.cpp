/*
 * AdapterTest.cpp
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <Teacher.h>
}

TEST_GROUP(Adapter) {
};

TEST(Adapter, OrganizeClass) {
    Teacher_doMain();
}

