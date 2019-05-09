/*
 * TanakasWoodCutPrint.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef TANAKASWOODCUTPRINT_H_
#define TANAKASWOODCUTPRINT_H_

#include <stdlib.h>
#include <stdio.h>

#include <WoodCutPrintPrivate.h>

typedef struct TanakasWoodCutPrintStruct TanakasWoodCutPrint;

extern TanakasWoodCutPrint *TanakasWoodCutPrint_create();

extern void TanakasWoodCutPrint_destroy(TanakasWoodCutPrint *tanaka);

#endif /* TANAKASWOODCUTPRINT_H_ */
