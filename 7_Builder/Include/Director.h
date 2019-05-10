/*
 * Director.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include <stdlib.h>
#include <Builder.h>

typedef struct DirectorStruct Director;

extern Director *Director_create(Builder *builder);

extern void Director_destroy(Director *director);

extern void Director_construct(Director *director);

#endif /* DIRECTOR_H_ */
