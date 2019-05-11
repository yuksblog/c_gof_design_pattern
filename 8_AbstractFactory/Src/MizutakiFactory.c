/*
 * MizutakiFactory.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <MizutakiFactory.h>

typedef struct MizutakiFactoryStruct {
    Factory interface;
} MizutakiFactoryStruct;

Soup *MizutakiFactory_createSoup(Factory *factory) {
    return (Soup*)ChickenBoneSoup_create(200);
}

void MizutakiFactory_destroySoup(Factory *factory, Soup *soup) {
    ChickenBoneSoup_destroy((ChickenBoneSoup*)soup);
}

Protein *MizutakiFactory_createMain(Factory *factory) {
    return (Protein*)Chicken_create(150);
}

void MizutakiFactory_destroyMain(Factory *factory, Protein *main) {
    Chicken_destroy((Chicken*)main);
}

Vegetable **MizutakiFactory_createVegetables(Factory *factory) {
    Vegetable **vegetables = (Vegetable**)malloc(sizeof(Vegetable*)*VEGETABLE_SIZE);
    vegetables[0] = (Vegetable*)ChineseCabbage_create(10);
    vegetables[1] = (Vegetable*)Leek_create(3);
    vegetables[2] = (Vegetable*)Chrysanthemum_create(5);
    for (uint16_t i = 3;i < VEGETABLE_SIZE; i++) {
        vegetables[i] = NULL;
    }

    return vegetables;
}

void MizutakiFactory_destroyVegetables(Factory *factory, Vegetable ** vegetables) {
    ChineseCabbage_destroy((ChineseCabbage*)vegetables[0]);
    Leek_destroy((Leek*)vegetables[1]);
    Chrysanthemum_destroy((Chrysanthemum*)vegetables[2]);
    free(vegetables);
}

Ingredient **MizutakiFactory_createOtherIngredients(Factory *factory) {
    Ingredient **ings = (Ingredient**)malloc(sizeof(Ingredient*)*INGREDIENT_SIZE);
    ings[0] = (Ingredient*)Tofu_create(1);
    for (uint16_t i = 1; i < INGREDIENT_SIZE; i++) {
        ings[i] = NULL;
    }

    return ings;
}

void MizutakiFactory_destroyOtherIngredients(Factory *factory, Ingredient ** ings) {
    Tofu_destroy((Tofu*)ings[0]);
    free(ings);
}

static FactoryInterface MizutakiFactoryInterface = {
        MizutakiFactory_createSoup,
        MizutakiFactory_destroySoup,
        MizutakiFactory_createMain,
        MizutakiFactory_destroyMain,
        MizutakiFactory_createVegetables,
        MizutakiFactory_destroyVegetables,
        MizutakiFactory_createOtherIngredients,
        MizutakiFactory_destroyOtherIngredients
};

MizutakiFactory *MizutakiFactory_create() {
    MizutakiFactory *factory = (MizutakiFactory*)malloc(sizeof(MizutakiFactory));
    factory->interface.vtable = & MizutakiFactoryInterface;

    return factory;
}

void MizutakiFactory_destroy(MizutakiFactory *factory) {
    free(factory);
}
