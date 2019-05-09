/*
 * Wood.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include <Wood.h>

typedef struct WoodStruct {
    Cuttable intereface;
    uint16_t width;
    uint16_t height;
    uint16_t length;
} WoodStruct;

Wood *Wood_create(uint16_t width, uint16_t height, uint16_t length) {
    Wood *wood = (Wood*)malloc(sizeof(Wood));
    wood->width = width;
    wood->height = height;
    wood->length = length;

    return wood;
}

void Wood_destroy(Wood *wood) {
    free(wood);
}
