/*
 * SoltWaterBuilder.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef SALTWATERBUILDER_H_
#define SALTWATERBUILDER_H_

#include <stdlib.h>
#include <Builder.h>
#include <SaltWater.h>

typedef struct SaltWaterBuilderStruct SaltWaterBuilder;

extern SaltWaterBuilder *SaltWaterBuilder_create();

extern void SaltWaterBuilder_destroy(SaltWaterBuilder * builder);

#endif /* SALTWATERBUILDER_H_ */
