/*
 * IteratorTest.cpp
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include "CppUTest/TestHarness.h"

extern "C" {
#include <ArrayTeacher.h>
#include <LinkTeacher.h>
}

TEST_GROUP(Iterator) {
};

TEST(Iterator, ArrayStudents) {
    ArrayTeacher *teacher = ArrayTeacher_create();
    Teacher_createStudentList((Teacher*)teacher);

    Teacher_callStudents((Teacher*)teacher);

    ArrayTeacher_destroy(teacher);
}

TEST(Iterator, LinkedListStudents) {
    LinkTeacher *teacher = LinkTeacher_create();
    Teacher_createStudentList((Teacher*)teacher);

    Teacher_callStudents((Teacher*)teacher);

    LinkTeacher_destroy(teacher);
}
