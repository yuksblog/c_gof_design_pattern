/*
 * Builder.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef BUILDER_H_
#define BUILDER_H_

typedef struct Builder {
    void (*addSolute)(struct Builder *builder, double solute);
    void (*addSolvent)(struct Builder *builder, double solbent);
    void (*abandonSolution)(struct Builder *builder, double solution);
    void *(*getResult)(struct Builder *builder);
} Builder;

extern void Builder_addSolute(Builder *builder, double solute);

extern void Builder_addSolvent(Builder *builder, double solvent);

extern void Builder_abandonSolution(Builder *builder, double solution);

extern void *Builder_getResult(Builder *builder);

#endif /* BUILDER_H_ */
