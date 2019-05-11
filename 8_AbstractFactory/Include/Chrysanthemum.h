/*
 * Chrysanthemum.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef CHRYSANTHEMUM_H_
#define CHRYSANTHEMUM_H_

#include <stdint.h>
#include <stdlib.h>
#include <Vegetable.h>

typedef struct ChrysanthemumStruct Chrysanthemum;

extern Chrysanthemum *Chrysanthemum_create(uint16_t count);

extern void Chrysanthemum_destroy(Chrysanthemum * chry);

#endif /* CHRYSANTHEMUM_H_ */
