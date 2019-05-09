/*
 * Teacher.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <ArrayTeacher.h>

typedef struct ArrayTeacherStruct {
    Teacher interface;
    StudentArrayList *students;
} ArrayTeacherStruct;


static void createStudentList(Teacher *teacher) {
    ArrayTeacher *ta = (ArrayTeacher*)teacher;

    ta->students = StudentArrayList_create();
    StudentArrayList_addStudent(ta->students, Student_create('A', 0));
    StudentArrayList_addStudent(ta->students, Student_create('B', 1));
    StudentArrayList_addStudent(ta->students, Student_create('C', 0));
    StudentArrayList_addStudent(ta->students, Student_create('D', 1));
}

static void callStudents(Teacher *teacher) {
    ArrayTeacher *ta = (ArrayTeacher*)teacher;

    Iterator *ite = Aggregate_iterator((Aggregate*)ta->students);
    while (Iterator_hasNext(ite)) {
        Student *student = (Student*)Iterator_next(ite);
        printf("Name=%c, Sex=%d\n", Student_getName(student), Student_getSex(student));
    }
}

ArrayTeacher *ArrayTeacher_create() {
    ArrayTeacher *teacher = (ArrayTeacher*)malloc(sizeof(ArrayTeacher));
    teacher->interface.createStudentList = createStudentList;
    teacher->interface.callStudents = callStudents;
    teacher->students = NULL;

    return teacher;
}

void ArrayTeacher_destroy(ArrayTeacher *ta) {
    if (ta->students != NULL) {
        Iterator *ite = Aggregate_iterator((Aggregate*)ta->students);
        while (Iterator_hasNext(ite)) {
            Student *student = (Student*)Iterator_next(ite);
            Student_destroy(student);
        }
        StudentArrayList_destroy(ta->students);
    }
    free(ta);
}
