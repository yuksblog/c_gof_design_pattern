/*
 * Human.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef HUMAN_H_
#define HUMAN_H_

#include <stdint.h>
#include <stdlib.h>

typedef struct Human {
    char name;
    int16_t height;
    int16_t weight;
    int16_t age;
} Human;

extern Human *Human_create(char name, uint16_t height, uint16_t weight, uint16_t age);

extern void Human_destroy(Human *human);

#endif /* HUMAN_H_ */
