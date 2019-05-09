/*
 * StudentList.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#ifndef ITERATOR_STUDENTARRAYLIST_H_
#define ITERATOR_STUDENTARRAYLIST_H_

#include <StudentArrayIterator.h>

typedef struct StudentArrayListStruct StudentArrayList;

extern StudentArrayList *StudentArrayList_create();

extern void StudentArrayList_destroy(StudentArrayList *students);

extern void StudentArrayList_addStudent(StudentArrayList *students, Student *student);

#endif /* ITERATOR_STUDENTARRAYLIST_H_ */
