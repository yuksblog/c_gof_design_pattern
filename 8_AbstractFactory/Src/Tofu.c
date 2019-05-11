/*
 * Tofu.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <Tofu.h>

typedef struct TofuStruct {
    Ingredient interface;
    uint16_t size;
} TofuStruct;

Tofu *Tofu_create(uint16_t size) {
    Tofu *tofu = (Tofu*)malloc(sizeof(Tofu));
    tofu->size = size;

    return tofu;
}

void Tofu_destroy(Tofu *tofu) {
    free(tofu);
}
