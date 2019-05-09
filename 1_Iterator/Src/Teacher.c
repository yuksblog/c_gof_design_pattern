/*
 * Teacher.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <Teacher.h>


void Teacher_createStudentList(Teacher *teacher) {
    teacher->createStudentList(teacher);
}

void Teacher_callStudents(Teacher *teacher) {
    teacher->callStudents(teacher);
}
