/*
 * WoodCutPrintPrivate.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef CUTPRINTPRIVATE_H_
#define CUTPRINTPRIVATE_H_

#include <CutPrint.h>
#include <Wood.h>

typedef struct CutPrintInterface {
    void (*draw)(CutPrint *cp, Cuttable *hanzai);
    void (*cut)(CutPrint *cp, Cuttable *hanzai);
    void (*print)(CutPrint *cp, Cuttable *hanzai);
    Cuttable *(*createCuttable)(CutPrint *cp);
    void (*destroyCuttable)(CutPrint *cp, Cuttable *hanzai);
} CutPrintInterface;

typedef struct CutPrintStruct {
    CutPrintInterface *vtable;
} CutPrintStruct;

extern Cuttable *CutPrint_createCuttable(CutPrint *cp);

extern void CutPrint_destroyCuttable(CutPrint *cp, Cuttable *hanzai);

#endif /* CUTPRINTPRIVATE_H_ */
