/*
 * TanakasWoodCutPrint.c
 *
 *  Created on: 2019/05/08
 *      Author: Yuk
 */

#include <TanakasWoodCutPrint.h>

static void Tanakas_draw(CutPrint *wcp, Cuttable *hanzai) {
    printf("draw the girl friend\n");
}

static void Tanakas_cut(CutPrint *wcp, Cuttable *hanzai) {
    printf("cut the wood\n");
}

static void Tanakas_print(CutPrint *wcp, Cuttable *hanzai) {
    printf("print dynamically\n");
}

static WoodCutPrintInterface interface = {
        Tanakas_draw,
        Tanakas_cut,
        Tanakas_print
};

typedef struct TanakasWoodCutPrintStruct {
    CutPrint super;
    uint16_t age;
} TanakasWoodCutPrintStruct;

TanakasWoodCutPrint *TanakasWoodCutPrint_create() {
    TanakasWoodCutPrint *tanaka = (TanakasWoodCutPrint*)malloc(sizeof(TanakasWoodCutPrint));
    tanaka->super.vtable = &interface;
    tanaka->age = 15;

    return tanaka;
}

void TanakasWoodCutPrint_destroy(TanakasWoodCutPrint *tanaka) {
    free(tanaka);
}
