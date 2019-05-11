/*
 * FactoryPrivate.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef FACTORYPRIVATE_H_
#define FACTORYPRIVATE_H_

#include <Factory.h>

typedef struct FactoryInterface {
    Soup *(*createSoup)(Factory *factory);
    void (*destroySoup)(Factory *factory, Soup *soup);
    Protein *(*createMain)(Factory *factory);
    void (*destroyMain)(Factory *factory, Protein *main);
    Vegetable **(*createVegetables)(Factory *factory);
    void (*destroyVegetables)(Factory *factory, Vegetable **vegetables);
    Ingredient **(*createOtherIngredients)(Factory *factory);
    void (*destroyOtherIngredients)(Factory *factory, Ingredient **ings);
} FactoryInterface;

typedef struct FactoryStruct {
    FactoryInterface *vtable;
} FactoryStruct;

#endif /* FACTORYPRIVATE_H_ */
