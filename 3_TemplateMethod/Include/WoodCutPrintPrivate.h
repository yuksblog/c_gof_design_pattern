/*
 * WoodCutPrintPrivate.h
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#ifndef WOODCUTPRINTPRIVATE_H_
#define WOODCUTPRINTPRIVATE_H_

#include <Wood.h>
#include <WoodCutPrint.h>

typedef struct WoodCutPrintInterface {
    void (*draw)(CutPrint *wcp, Cuttable *hanzai);
    void (*cut)(CutPrint *wcp, Cuttable *hanzai);
    void (*print)(CutPrint *wcp, Cuttable *hanzai);
} WoodCutPrintInterface;

typedef struct WoodCutPrintStruct {
    WoodCutPrintInterface *vtable;
} WoodCutPrintStruct;


#endif /* WOODCUTPRINTPRIVATE_H_ */
