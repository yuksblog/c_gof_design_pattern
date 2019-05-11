/*
 * ChickenBoneSoup.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <ChickenBoneSoup.h>

typedef struct ChickenBoneSoupStruct {
    Soup interface;
    uint16_t volume;
} ChickenBoneSoupStruct;

ChickenBoneSoup *ChickenBoneSoup_create(uint16_t volume) {
    ChickenBoneSoup *soup = (ChickenBoneSoup*)malloc(sizeof(ChickenBoneSoup));
    soup->volume = volume;

    return soup;
}

void ChickenBoneSoup_destroy(ChickenBoneSoup *soup) {
    free(soup);
}
