/*
 * Cloneable.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <Cloneable.h>

void *Cloneable_createClone(Cloneable *c) {
    return (void*)c->createClone(c);
}
