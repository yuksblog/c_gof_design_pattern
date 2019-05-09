/*
 * TemplateMethodTest.cpp
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <Teacher.h>
}

TEST_GROUP(Prototype) {
};

TEST(Prototype, CreateClone) {
    Teacher *teacher = Teacher_create();

    Paper **crystals = Teacher_createManyCrystals(teacher);
    for (uint16_t i = 1; i < CRYSTAL_SIZE; i++) {
        CHECK_EQUAL('1', Paper_getName((Paper*)crystals[i]));
        CHECK_EQUAL(100, Paper_getHeight((Paper*)crystals[i]));
        CHECK_EQUAL(200, Paper_getWidth((Paper*)crystals[i]));
        CHECK_FALSE(crystals[i-1] == crystals[i]);
    }
    Teacher_destroyManyCrystals(teacher, crystals);

    Teacher_destroy(teacher);
}
