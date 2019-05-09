/*
 * Student.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_STUDENT_H_
#define ITERATOR_STUDENT_H_

#include <stdint.h>
#include <stdlib.h>

typedef struct StudentStruct Student;

extern Student *Student_create(char name, uint8_t sex);

extern void Student_destroy(Student *student);

extern char Student_getName(Student *student);

extern uint8_t Student_getSex(Student *student);

#endif /* ITERATOR_STUDENT_H_ */
