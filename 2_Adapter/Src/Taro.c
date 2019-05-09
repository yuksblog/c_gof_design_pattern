/*
 * Taro.c
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#include <Taro.h>

typedef struct TaroStruct {
    uint16_t age;
} TaroStruct;

Taro *Taro_create() {
    Taro *taro = (Taro*)malloc(sizeof(Taro));
    taro->age = 11;
    return taro;
}

void Taro_destroy(Taro *taro) {
    free(taro);
}

void Taro_enjoyWithAllClassmates(Taro *taro) {
    printf("enjoy all!");
}
