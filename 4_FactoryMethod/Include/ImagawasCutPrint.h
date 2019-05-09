/*
 * TanakasWoodCutPrint.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef IMAGAWASCUTPRINT_H_
#define IMAGAWASCUTPRINT_H_

#include <stdlib.h>
#include <stdio.h>

#include <CutPrintPrivate.h>
#include <Potato.h>

typedef struct ImagawasCutPrintStruct ImagawasCutPrint;

extern ImagawasCutPrint *ImagawasCutPrint_create();

extern void ImagawasCutPrint_destroy(ImagawasCutPrint *imagawa);

#endif /* IMAGAWASCUTPRINT_H_ */
