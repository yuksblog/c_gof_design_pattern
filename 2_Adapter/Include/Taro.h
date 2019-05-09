/*
 * Taro.h
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#ifndef TARO_H_
#define TARO_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct TaroStruct Taro;

extern Taro *Taro_create();

extern void Taro_destroy(Taro *taro);

extern void Taro_enjoyWithAllClassmates(Taro *taro);

#endif /* TARO_H_ */
