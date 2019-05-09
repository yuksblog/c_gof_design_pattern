/*
 * TemplateMethodTest.cpp
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <RegisterNote.h>
}

TEST_GROUP(Singleton) {
};

TEST(Singleton, GetInstance) {
    RegisterNote *note1 = RegisterNote_getInstance();
    RegisterNote *note2 = RegisterNote_getInstance();
    CHECK_EQUAL(note1, note2);
}
