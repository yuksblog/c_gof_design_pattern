/*
 * Builder.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <Builder.h>

void Builder_addSolute(Builder *builder, double solute) {
    builder->addSolute(builder, solute);
}

void Builder_addSolvent(Builder *builder, double solvent) {
    builder->addSolvent(builder, solvent);
}

void Builder_abandonSolution(Builder *builder, double solution) {
    builder->abandonSolution(builder, solution);
}

void *Builder_getResult(Builder *builder) {
    return builder->getResult(builder);
}
