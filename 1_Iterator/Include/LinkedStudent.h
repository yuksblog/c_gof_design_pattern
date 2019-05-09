/*
 * LinkingStudent.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_LINKEDSTUDENT_H_
#define ITERATOR_LINKEDSTUDENT_H_

#include <StudentPrivate.h>

typedef struct LinkedStudentStruct LinkedStudent;

extern LinkedStudent *LinkedStudent_create(char name, uint8_t sex);

extern void LinkedStudent_destroy(LinkedStudent *student);

#endif /* ITERATOR_LINKEDSTUDENT_H_ */
