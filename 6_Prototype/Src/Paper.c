/*
 * Paper.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <Paper.h>

typedef struct PaperStruct {
    Cloneable interface;
    char name;
    uint16_t height;
    uint16_t width;
} PaperStruct;

static void *createClone(Cloneable *c) {
    Paper *paper = (Paper*)c;

    Paper *clone = Paper_create(paper->name);
    clone->height = paper->height;
    clone->width = paper->width;

    return clone;
}

Paper *Paper_create(char name) {
    Paper *paper = (Paper*)malloc(sizeof(Paper));
    paper->interface.createClone = createClone;
    paper->name = name;
    paper->height = 100;
    paper->width = 200;

    return paper;
}

void Paper_destroy(Paper *paper) {
    free(paper);
}

char Paper_getName(Paper *paper) {
    return paper->name;
}

uint16_t Paper_getHeight(Paper *paper) {
    return paper->height;
}

uint16_t Paper_getWidth(Paper *paper) {
    return paper->width;
}

