/*
 * AbstractFactoryTest.cpp
 *
 *  Created on: 2019/05/11
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <SampleClass.h>
}

TEST_GROUP(AbstractFactory) {
};

TEST(AbstractFactory, Create) {
    SampleClass_doMain();
}
