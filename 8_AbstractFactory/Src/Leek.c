/*
 * Leek.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <Leek.h>

typedef struct LeekStruct {
    Vegetable interface;
    uint16_t count;
} LeekStruct;

Leek *Leek_create(uint16_t count) {
    Leek *leek = (Leek*)malloc(sizeof(Leek));
    leek->count = count;

    return leek;
}

void Leek_destroy(Leek *leek) {
    free(leek);
}
