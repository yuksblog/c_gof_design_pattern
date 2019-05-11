/*
 * SampleClass.c
 *
 *  Created on: 2019/05/11
 *      Author: Yuk
 */

#include <SampleClass.h>

static Factory *createFactory(uint16_t id) {
    Factory *factory = NULL;
    switch (id) {
//    case 0:
//        factory = (Factory*)KimuchiFactory_create();
//    case 1:
//        factory = (Factory*)SukiyakiFactory_create();
    default:
        factory = (Factory*)MizutakiFactory_create();
    }

    return factory;
}

static void destroyFactory(uint16_t id, Factory *factory) {
    switch (id) {
//    case 0:
//        KimuchiFactory_destroy((KimuchiFactory*)factory);
//    case 1:
//        SukiyakiFactory_destroy((SukiyakiFactory*)factory);
    default:
        MizutakiFactory_destroy((MizutakiFactory*)factory);
    }
}

void SampleClass_doMain() {
    Pot pot;
    HotPot *hotpot = HotPot_create(&pot);
    Factory *factory = createFactory(2);
    HotPot_addSoup(hotpot, Factory_createSoup(factory));
    HotPot_addMain(hotpot, Factory_createMain(factory));
    HotPot_addVegetables(hotpot, Factory_createVegetables(factory));
    HotPot_addOtherIngredients(hotpot, Factory_createOtherIngredients(factory));

    // do something

    Factory_destroySoup(factory, HotPot_getSoup(hotpot));
    Factory_destroyMain(factory, HotPot_getMain(hotpot));
    Factory_destroyVegetables(factory, HotPot_getVegetables(hotpot));
    Factory_destroyOtherIngredients(factory, HotPot_getOtherIngredients(hotpot));
    destroyFactory(2, factory);
    HotPot_destroy(hotpot);
}
