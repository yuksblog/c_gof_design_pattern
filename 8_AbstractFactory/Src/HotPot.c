/*
 * HotPot.c
 *
 *  Created on: 2019/05/11
 *      Author: Yuk
 */

#include <HotPot.h>

typedef struct HotPotStruct {
    Pot *pot;
    Soup *soup;
    Protein *main;
    Vegetable **vegetables;
    Ingredient **ings;
} HotPotStruct;

HotPot *HotPot_create(Pot *pot) {
    HotPot *hotpot = (HotPot*)malloc(sizeof(HotPot));
    hotpot->pot = pot;
    hotpot->soup = NULL;
    hotpot->main = NULL;
    hotpot->vegetables = NULL;
    hotpot->ings = NULL;

    return hotpot;
}

void HotPot_destroy(HotPot *hotpot) {
    free(hotpot);
}

Pot *HotPot_getPot(HotPot *hotpot) {
    return hotpot->pot;
}

void HotPot_addSoup(HotPot *hotpot, Soup *soup) {
    hotpot->soup = soup;
}

Soup *HotPot_getSoup(HotPot *hotpot) {
    return hotpot->soup;
}

void HotPot_addMain(HotPot *hotpot, Protein *main) {
    hotpot->main = main;
}

Protein *HotPot_getMain(HotPot *hotpot) {
    return hotpot->main;
}

void HotPot_addVegetables(HotPot *hotpot, Vegetable **vegetables) {
    hotpot->vegetables = vegetables;
}

Vegetable **HotPot_getVegetables(HotPot *hotpot) {
    return hotpot->vegetables;
}

void HotPot_addOtherIngredients(HotPot *hotpot, Ingredient **ings) {
    hotpot->ings = ings;
}

Ingredient **HotPot_getOtherIngredients(HotPot *hotpot) {
    return hotpot->ings;
}
