/*
 * Human.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <Human.h>

Human *Human_create(char name, uint16_t height, uint16_t weight, uint16_t age) {
    Human *human = (Human*)malloc(sizeof(Human));
    human->name = name;
    human->age = age;
    human->height = height;
    human->weight = weight;

    return human;
}

void Human_destroy(Human *human) {
    free(human);
}
