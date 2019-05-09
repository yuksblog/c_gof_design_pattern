/*
 * TeacherArray.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_ARRAYTEACHER_H_
#define ITERATOR_ARRAYTEACHER_H_

#include <Teacher.h>
#include <StudentArrayList.h>

typedef struct ArrayTeacherStruct ArrayTeacher;

extern ArrayTeacher *ArrayTeacher_create();

extern void ArrayTeacher_destroy(ArrayTeacher *teacher);

#endif /* ITERATOR_ARRAYTEACHER_H_ */
