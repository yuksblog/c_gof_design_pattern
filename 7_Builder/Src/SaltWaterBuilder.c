/*
 * SoltWaterBuilder.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <SaltWaterBuilder.h>

typedef struct SaltWaterBuilderStruct {
    Builder interface;
    SaltWater saltWater;
} SaltWaterBuilderStruct;

void addSolute(Builder *builder, double solute) {
    SaltWaterBuilder *swb = (SaltWaterBuilder*)builder;
    swb->saltWater.salt += solute;
}

void addSolvent(Builder *builder, double solvent) {
    SaltWaterBuilder *swb = (SaltWaterBuilder*)builder;
    swb->saltWater.water += solvent;
}

void abandonSolution(Builder *builder, double solution) {
    SaltWaterBuilder *swb = (SaltWaterBuilder*)builder;
    double saltDelta = solution *
            (swb->saltWater.salt / (swb->saltWater.salt + swb->saltWater.water));
    double waterDelta = solution *
            (swb->saltWater.water / (swb->saltWater.salt + swb->saltWater.water));
    swb->saltWater.salt -= saltDelta;
    swb->saltWater.water -= waterDelta;
}

void *getResult(Builder *builder) {
    SaltWaterBuilder *swb = (SaltWaterBuilder*)builder;
    return &swb->saltWater;
}

SaltWaterBuilder *SaltWaterBuilder_create() {
    SaltWaterBuilder *builder = (SaltWaterBuilder*)malloc(sizeof(SaltWaterBuilder));
    builder->interface.addSolute = addSolute;
    builder->interface.addSolvent = addSolvent;
    builder->interface.abandonSolution = abandonSolution;
    builder->interface.getResult = getResult;
    builder->saltWater.salt = 0.0;
    builder->saltWater.water = 0.0;

    return builder;
}

void SaltWaterBuilder_destroy(SaltWaterBuilder * builder) {
    free(builder);
}
