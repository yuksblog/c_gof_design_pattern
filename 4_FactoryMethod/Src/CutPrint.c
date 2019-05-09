/*
 * WoodCutPrint.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */


#include <CutPrintPrivate.h>

Cuttable *CutPrint_createCuttable(CutPrint *cp) {
    return (Cuttable*)Wood_create(100, 500, 200);
}

void CutPrint_destroyCuttable(CutPrint *cp, Cuttable *hanzai) {
    Wood_destroy((Wood*)hanzai);
}

void CutPrint_createCutPrint(CutPrint *cp) {
    Cuttable *c = cp->vtable->createCuttable(cp);

    cp->vtable->draw(cp, c);
    cp->vtable->cut(cp, c);
    cp->vtable->print(cp, c);

    cp->vtable->destroyCuttable(cp, c);
}
