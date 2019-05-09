/*
 * Teacher.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_TEACHER_H_
#define ITERATOR_TEACHER_H_

#include <stdio.h>

typedef struct Teacher {
    void (*createStudentList)(struct Teacher *teacher);
    void (*callStudents)(struct Teacher *teacher);
} Teacher;

extern void Teacher_createStudentList(Teacher *teacher);

extern void Teacher_callStudents(Teacher *teacher);

#endif /* ITERATOR_TEACHER_H_ */
