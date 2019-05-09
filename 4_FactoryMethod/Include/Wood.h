/*
 * Wood.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef WOOD_H_
#define WOOD_H_

#include <stdint.h>
#include <stdlib.h>
#include <Cuttable.h>

typedef struct WoodStruct Wood;

extern Wood *Wood_create(uint16_t width, uint16_t height, uint16_t length);

extern void Wood_destroy(Wood *wood);

#endif /* WOOD_H_ */
