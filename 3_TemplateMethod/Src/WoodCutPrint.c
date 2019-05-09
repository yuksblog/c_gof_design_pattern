/*
 * WoodCutPrint.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */


#include <WoodCutPrintPrivate.h>

void WoodCutPrint_createWoodCutPrint(CutPrint *wcp) {
    Wood *wood = Wood_create(100, 500, 200);

    wcp->vtable->draw(wcp, (Cuttable*)&wood);
    wcp->vtable->cut(wcp, (Cuttable*)&wood);
    wcp->vtable->print(wcp, (Cuttable*)&wood);

    Wood_destroy(wood);
}
