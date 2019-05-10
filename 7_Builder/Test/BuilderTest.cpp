/*
 * BuilderTest.cpp
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <Director.h>
#include <SaltWaterBuilder.h>
}

TEST_GROUP(Builder) {
};

TEST(Builder, Construct) {
    SaltWaterBuilder *builder = SaltWaterBuilder_create();
    Director *director = Director_create((Builder*)builder);

    Director_construct(director);
    SaltWater *saltWater = (SaltWater*)Builder_getResult((Builder*)builder);

    DOUBLES_EQUAL(35.0, saltWater->salt, __DBL_EPSILON__);
    DOUBLES_EQUAL(150.0, saltWater->water, __DBL_EPSILON__);

    SaltWaterBuilder_destroy(builder);
    Director_destroy(director);
}
