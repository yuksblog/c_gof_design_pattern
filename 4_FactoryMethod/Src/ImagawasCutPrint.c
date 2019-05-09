/*
 * TanakasWoodCutPrint.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include <ImagawasCutPrint.h>

static void Imagawas_draw(CutPrint *wcp, Cuttable *hanzai) {
    printf("draw a manga\n");
}

static void Imagawas_cut(CutPrint *wcp, Cuttable *hanzai) {
    printf("cut with dexterity\n");
}

static void Imagawas_print(CutPrint *wcp, Cuttable *hanzai) {
    printf("print with my blood\n");
}

static Cuttable *Imagawas_createCuttable(CutPrint *cp) {
    return (Cuttable*)Potato_create(100);
}

static void Imagawas_destroyCuttable(CutPrint *cp, Cuttable *hanzai) {
    Potato_destroy((Potato*)hanzai);
}


static CutPrintInterface interface = {
        Imagawas_draw,
        Imagawas_cut,
        Imagawas_print,
        Imagawas_createCuttable,
        Imagawas_destroyCuttable
};

typedef struct ImagawasCutPrintStruct {
    CutPrint super;
    uint16_t age;
} ImagawasCutPrintStruct;

ImagawasCutPrint *ImagawasCutPrint_create() {
    ImagawasCutPrint *imagawa = (ImagawasCutPrint*)malloc(sizeof(ImagawasCutPrint));
    imagawa->super.vtable = &interface;
    imagawa->age = 15;

    return imagawa;
}

void ImagawasCutPrint_destroy(ImagawasCutPrint *imagawa) {
    free(imagawa);
}
