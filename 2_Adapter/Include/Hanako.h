/*
 * Hanako.h
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#ifndef HANAKO_H_
#define HANAKO_H_

#include <Taro.h>
#include <Chairperson.h>

typedef struct HanakoStruct Hanako;

extern Hanako *Hanako_create();

extern void Hanako_destroy(Hanako *hanako);

#endif /* HANAKO_H_ */
