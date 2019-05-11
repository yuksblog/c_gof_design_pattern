/*
 * Factory.c
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */

#include <FactoryPrivate.h>

Soup *Factory_createSoup(Factory *factory) {
    return factory->vtable->createSoup(factory);
}

void Factory_destroySoup(Factory *factory, Soup *soup) {
    factory->vtable->destroySoup(factory, soup);
}

Protein *Factory_createMain(Factory *factory) {
    return factory->vtable->createMain(factory);
}

void Factory_destroyMain(Factory *factory, Protein *main) {
    factory->vtable->destroyMain(factory, main);
}

Vegetable **Factory_createVegetables(Factory *factory) {
    return factory->vtable->createVegetables(factory);
}

void Factory_destroyVegetables(Factory *factory, Vegetable **vegetables) {
    factory->vtable->destroyVegetables(factory, vegetables);
}

Ingredient **Factory_createOtherIngredients(Factory *factory) {
    return factory->vtable->createOtherIngredients(factory);
}

void Factory_destroyOtherIngredients(Factory *factory, Ingredient **ings) {
    factory->vtable->destroyOtherIngredients(factory, ings);
}
