/*
 * Teacher.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <Teacher.h>

typedef struct TeacherStruct {
    char name;
} TeacherStruct;


static void drawCrystal(Paper *paper) {
    // do drawCrystal
}

static void cutAccordanceWithLine(Paper *paper) {
    // do cutAccordanceWithLine
}

Teacher *Teacher_create() {
    Teacher *teacher = (Teacher*)malloc(sizeof(Teacher*));
    teacher->name = 'A';
    return teacher;
}

void Teacher_destroy(Teacher *teacher) {
    free(teacher);
}

Paper **Teacher_createManyCrystals(Teacher *teacher) {
    // create a prototype
    Paper *prototype = Paper_create('1');
    drawCrystal(prototype);
    cutAccordanceWithLine(prototype);

    // clone
    Paper **crystals = (Paper**)malloc(sizeof(Paper*)*CRYSTAL_SIZE);
    crystals[0] = prototype;
    for (uint16_t i = 1; i < CRYSTAL_SIZE; i++) {
        crystals[i] = (Paper*)Cloneable_createClone((Cloneable*)prototype);
    }

    return crystals;
}

void Teacher_destroyManyCrystals(Teacher *teacher, Paper **paper) {
    for (uint16_t i = 0; i < CRYSTAL_SIZE; i++) {
        if (paper[i] != NULL) {
            Paper_destroy(paper[i]);
        }
    }
    free(paper);
}
