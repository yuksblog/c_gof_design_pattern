/*
 * ChineseCabbage.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef CHINESECABBAGE_H_
#define CHINESECABBAGE_H_

#include <stdint.h>
#include <stdlib.h>
#include <Vegetable.h>

typedef struct ChineseCabbageStruct ChineseCabbage;

extern ChineseCabbage *ChineseCabbage_create(uint16_t count);

extern void ChineseCabbage_destroy(ChineseCabbage *cc);

#endif /* CHINESECABBAGE_H_ */
