/*
 * Chicken.h
 *
 *  Created on: 2019/05/10
 *      Author: Yuk
 */
#ifndef CHICKEN_H_
#define CHICKEN_H_

#include <stdint.h>
#include <stdlib.h>
#include <Protein.h>

typedef struct ChickenStruct Chicken;

extern Chicken *Chicken_create(uint16_t size);

extern void Chicken_destroy(Chicken *chicken);

#endif /* CHICKEN_H_ */
