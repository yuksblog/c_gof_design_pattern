/*
 * Wood.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef POTATO_H_
#define POTATO_H_

#include <stdint.h>
#include <stdlib.h>
#include <Cuttable.h>

typedef struct PotatoStruct Potato;

extern Potato *Potato_create(uint16_t size);

extern void Potato_destroy(Potato *potato);

#endif /* POTATO_H_ */
