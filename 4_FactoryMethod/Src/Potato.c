/*
 * Potato.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include <Potato.h>

typedef struct PotatoStruct {
    Cuttable intereface;
    uint16_t size;
} PotatoStruct;

Potato *Potato_create(uint16_t size) {
    Potato *potato = (Potato*)malloc(sizeof(Potato));
    potato->size = size;

    return potato;
}

void Potato_destroy(Potato *potato) {
    free(potato);
}
