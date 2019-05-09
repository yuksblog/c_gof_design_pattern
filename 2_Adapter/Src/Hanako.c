/*
 * Hanako.c
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#include <Hanako.h>

typedef struct HanakoStruct {
    Chairperson interface;
    Taro *taro;
    uint16_t age;
} HanakoStruct;



static void organizeClass(Chairperson *chair) {
    Hanako *hanako = (Hanako*)chair;
    Taro_enjoyWithAllClassmates(hanako->taro);
}



Hanako *Hanako_create() {
    Hanako *hanako = (Hanako*)malloc(sizeof(Hanako));
    hanako->interface.organizeClass = organizeClass;
    hanako->taro = Taro_create();
    hanako->age = 12;

    return hanako;
}

void Hanako_destroy(Hanako *hanako) {
    Taro_destroy(hanako->taro);
    free(hanako);
}

