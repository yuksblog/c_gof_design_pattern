/*
 * Cloneable.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef CLONEABLE_H_
#define CLONEABLE_H_

typedef struct Cloneable {
    void *(*createClone)(struct Cloneable *c);
} Cloneable;

extern void *Cloneable_createClone(Cloneable *c);

#endif /* CLONEABLE_H_ */
