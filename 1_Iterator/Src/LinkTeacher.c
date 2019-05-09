/*
 * TeacherLinked.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <LinkTeacher.h>

typedef struct LinkTeacherStruct {
    Teacher interface;
    LinkedStudentList *students;
} LinkTeacherStruct;



static void createStudentList(Teacher *teacher) {
    LinkTeacher *ta = (LinkTeacher*)teacher;

    ta->students = LinkedStudentList_create();
    LinkedStudentList_addStudent(ta->students, LinkedStudent_create('1', 0));
    LinkedStudentList_addStudent(ta->students, LinkedStudent_create('2', 1));
}

static void callStudents(Teacher *teacher) {
    LinkTeacher *ta = (LinkTeacher*)teacher;

    Iterator *ite = Aggregate_iterator((Aggregate*)ta->students);
    while (Iterator_hasNext(ite)) {
        Student *student = (Student*)Iterator_next(ite);
        printf("Name=%c, Sex=%d\n", Student_getName(student), Student_getSex(student));
    }
}



LinkTeacher *LinkTeacher_create() {
    LinkTeacher *ta = (LinkTeacher*)malloc(sizeof(LinkTeacher));
    ta->interface.createStudentList = createStudentList;
    ta->interface.callStudents = callStudents;
    ta->students = NULL;

    return ta;
}

void LinkTeacher_destroy(LinkTeacher *teacher) {
    Iterator *ite = Aggregate_iterator((Aggregate*)teacher->students);
    while (Iterator_hasNext(ite)) {
        LinkedStudent *student = (LinkedStudent*)Iterator_next(ite);
        LinkedStudent_destroy(student);
    }

    LinkedStudentList_destroy(teacher->students);

    free(teacher);
}
