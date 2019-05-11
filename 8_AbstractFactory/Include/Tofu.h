/*
 * Tofu.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef TOFU_H_
#define TOFU_H_

#include <stdint.h>
#include <stdlib.h>
#include <Ingredient.h>

typedef struct TofuStruct Tofu;

extern Tofu *Tofu_create(uint16_t size);

extern void Tofu_destroy(Tofu *tofu);

#endif /* TOFU_H_ */
