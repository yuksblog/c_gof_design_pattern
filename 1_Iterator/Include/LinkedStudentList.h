/*
 * LinkingStudentList.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_LINKEDSTUDENTLIST_H_
#define ITERATOR_LINKEDSTUDENTLIST_H_

#include <LinkedStudentIterator.h>

typedef struct LinkedStudentListStruct LinkedStudentList;

extern LinkedStudentList *LinkedStudentList_create();

extern void LinkedStudentList_destroy(LinkedStudentList *list);

extern void LinkedStudentList_addStudent(LinkedStudentList *students, LinkedStudent *student);

#endif /* ITERATOR_LINKEDSTUDENTLIST_H_ */
