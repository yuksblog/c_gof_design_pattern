/*
 * Chicken.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <Chicken.h>

typedef struct ChickenStruct {
    Protein interface;
    uint16_t size;
} ChickenStruct;

Chicken *Chicken_create(uint16_t size) {
    Chicken *chicken = (Chicken*)malloc(sizeof(Chicken));
    chicken->size = size;

    return chicken;
}

void Chicken_destroy(Chicken *chicken) {
    free(chicken);
}
