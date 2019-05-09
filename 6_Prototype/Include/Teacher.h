/*
 * Teacher.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef TEACHER_H_
#define TEACHER_H_

#include <Paper.h>

#define CRYSTAL_SIZE            100

typedef struct TeacherStruct Teacher;

extern Teacher *Teacher_create();

extern void Teacher_destroy(Teacher *teacher);

extern Paper **Teacher_createManyCrystals(Teacher *teacher);

extern void Teacher_destroyManyCrystals(Teacher *teacher, Paper **paper);

#endif /* TEACHER_H_ */
