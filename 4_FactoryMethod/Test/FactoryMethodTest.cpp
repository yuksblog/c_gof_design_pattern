/*
 * TemplateMethodTest.cpp
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <ImagawasCutPrint.h>
}

TEST_GROUP(FactoryMethod) {
};

TEST(FactoryMethod, CreateWoodCutPrint) {
    ImagawasCutPrint *imagawa = ImagawasCutPrint_create();
    CutPrint_createCutPrint((CutPrint*)imagawa);
    ImagawasCutPrint_destroy(imagawa);
}
