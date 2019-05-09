/*
 * LinkingStudent.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <LinkedStudentPrivate.h>

LinkedStudent *LinkedStudent_create(char name, uint8_t sex) {
    LinkedStudent *student = (LinkedStudent*)malloc(sizeof(LinkedStudent));
    student->super.name = name;
    student->super.sex = sex;
    student->next = NULL;

    return student;
}

void LinkedStudent_destroy(LinkedStudent *student) {
    free(student);
}
