/*
 * Director.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <Director.h>

typedef struct DirectorStruct {
    Builder *builder;
} DirectorStruct;

Director *Director_create(Builder *builder) {
    Director *director = (Director*)malloc(sizeof(Director));
    director->builder = builder;

    return director;
}

void Director_destroy(Director *director) {
    free(director);
}

void Director_construct(Director *director) {
    Builder_addSolvent(director->builder, 100.0);
    Builder_addSolute(director->builder, 40.0);
    Builder_abandonSolution(director->builder, 70.0);
    Builder_addSolvent(director->builder, 100.0);
    Builder_addSolute(director->builder, 15.0);
}
