/*
 * Paper.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef PAPER_H_
#define PAPER_H_

#include <stdlib.h>
#include <stdint.h>
#include <Cloneable.h>

typedef struct PaperStruct Paper;

extern Paper *Paper_create(char name);

extern void Paper_destroy(Paper *paper);

extern char Paper_getName(Paper *paper);

extern uint16_t Paper_getHeight(Paper *paper);

extern uint16_t Paper_getWidth(Paper *paper);

#endif /* PAPER_H_ */
