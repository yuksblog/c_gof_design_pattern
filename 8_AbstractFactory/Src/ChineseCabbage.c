/*
 * ChineseCabbage.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <ChineseCabbage.h>

typedef struct ChineseCabbageStruct {
    Vegetable interface;
    uint16_t count;
} ChineseCabbageStruct;

ChineseCabbage *ChineseCabbage_create(uint16_t count) {
    ChineseCabbage *cc = (ChineseCabbage*)malloc(sizeof(ChineseCabbage));
    cc->count = count;

    return cc;
}

void ChineseCabbage_destroy(ChineseCabbage *cc) {
    free(cc);
}
