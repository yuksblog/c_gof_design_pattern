/*
 * Leek.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef LEEK_H_
#define LEEK_H_

#include <stdint.h>
#include <stdlib.h>
#include <Vegetable.h>

typedef struct LeekStruct Leek;

extern Leek *Leek_create(uint16_t count);

extern void Leek_destroy(Leek *leek);

#endif /* LEEK_H_ */
