/*
 * TeacherLinked.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_LINKTEACHER_H_
#define ITERATOR_LINKTEACHER_H_

#include <LinkedStudentList.h>
#include <Teacher.h>

typedef struct LinkTeacherStruct LinkTeacher;

extern LinkTeacher *LinkTeacher_create();

extern void LinkTeacher_destroy(LinkTeacher *teacher);

#endif /* ITERATOR_LINKTEACHER_H_ */
