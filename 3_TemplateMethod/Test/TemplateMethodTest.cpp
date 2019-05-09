/*
 * TemplateMethodTest.cpp
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <TanakasWoodCutPrint.h>
}

TEST_GROUP(TemplateMethod) {
};

TEST(TemplateMethod, CreateWoodCutPrint) {
    TanakasWoodCutPrint *tanaka = TanakasWoodCutPrint_create();
    WoodCutPrint_createWoodCutPrint((CutPrint*)tanaka);
    TanakasWoodCutPrint_destroy(tanaka);
}
