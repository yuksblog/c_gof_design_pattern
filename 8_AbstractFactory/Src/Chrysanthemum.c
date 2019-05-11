/*
 * Chrysanthemum.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <Chrysanthemum.h>

typedef struct ChrysanthemumStruct {
    Vegetable *interface;
    uint16_t count;
} ChrysanthemumStruct;

Chrysanthemum *Chrysanthemum_create(uint16_t count) {
    Chrysanthemum *chry = (Chrysanthemum*)malloc(sizeof(Chrysanthemum));
    chry->count = count;

    return chry;
}

void Chrysanthemum_destroy(Chrysanthemum * chry) {
    free(chry);
}
