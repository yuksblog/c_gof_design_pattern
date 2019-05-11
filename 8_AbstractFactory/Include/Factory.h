/*
 * Factory.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef FACTORY_H_
#define FACTORY_H_

#include <Soup.h>
#include <Protein.h>
#include <Vegetable.h>
#include <Ingredient.h>

#define VEGETABLE_SIZE                10
#define INGREDIENT_SIZE               10

typedef struct FactoryStruct Factory;

extern Soup *Factory_createSoup(Factory *factory);

extern void Factory_destroySoup(Factory *factory, Soup *soup);

extern Protein *Factory_createMain(Factory *factory);

extern void Factory_destroyMain(Factory *factory, Protein *main);

extern Vegetable **Factory_createVegetables(Factory *factory);

extern void Factory_destroyVegetables(Factory *factory, Vegetable **vegetables);

extern Ingredient **Factory_createOtherIngredients(Factory *factory);

extern void Factory_destroyOtherIngredients(Factory *factory, Ingredient **ings);

#endif /* FACTORY_H_ */
