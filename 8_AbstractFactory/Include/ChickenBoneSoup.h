/*
 * ChickenBoneSoup.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef CHICKENBONESOUP_H_
#define CHICKENBONESOUP_H_

#include <stdint.h>
#include <stdlib.h>
#include <Soup.h>

typedef struct ChickenBoneSoupStruct ChickenBoneSoup;

extern ChickenBoneSoup *ChickenBoneSoup_create(uint16_t volume);

extern void ChickenBoneSoup_destroy(ChickenBoneSoup *soup);

#endif /* CHICKENBONESOUP_H_ */
