/*
 * Student.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <StudentPrivate.h>

Student *Student_create(char name, uint8_t sex) {
    Student *student = (Student*)malloc(sizeof(Student));
    student->name = name;
    student->sex = sex;

    return student;
}

void Student_destroy(Student *student) {
    free(student);
}

char Student_getName(Student *student) {
    return student->name;
}

uint8_t Student_getSex(Student *student) {
    return student->sex;
}
