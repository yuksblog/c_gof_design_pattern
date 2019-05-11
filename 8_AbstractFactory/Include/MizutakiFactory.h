/*
 * MizutakiFactory.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef MIZUTAKIFACTORY_H_
#define MIZUTAKIFACTORY_H_

#include <FactoryPrivate.h>
#include <Chicken.h>
#include <ChickenBoneSoup.h>
#include <ChineseCabbage.h>
#include <Chrysanthemum.h>
#include <Leek.h>
#include <Tofu.h>

typedef struct MizutakiFactoryStruct MizutakiFactory;

extern MizutakiFactory *MizutakiFactory_create();

extern void MizutakiFactory_destroy(MizutakiFactory *factory);

#endif /* MIZUTAKIFACTORY_H_ */
