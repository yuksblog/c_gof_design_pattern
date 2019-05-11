/*
 * HotPot.h
 *
 *  Created on: 2019/05/11
 *      Author: Yuk
 */
#ifndef HOTPOT_H_
#define HOTPOT_H_

#include <stdlib.h>
#include <Pot.h>
#include <Soup.h>
#include <Protein.h>
#include <Vegetable.h>
#include <Ingredient.h>

typedef struct HotPotStruct HotPot;

extern HotPot *HotPot_create(Pot *pot);

extern void HotPot_destroy(HotPot *hotpot);

extern Pot *HotPot_getPot(HotPot *hotpot);

extern void HotPot_addSoup(HotPot *hotpot, Soup *soup);

extern Soup *HotPot_getSoup(HotPot *hotpot);

extern void HotPot_addMain(HotPot *hotpot, Protein *main);

extern Protein *HotPot_getMain(HotPot *hotpot);

extern void HotPot_addVegetables(HotPot *hotpot, Vegetable **vegetables);

extern Vegetable **HotPot_getVegetables(HotPot *hotpot);

extern void HotPot_addOtherIngredients(HotPot *hotpot, Ingredient **ings);

extern Ingredient **HotPot_getOtherIngredients(HotPot *hotpot);

#endif /* HOTPOT_H_ */
