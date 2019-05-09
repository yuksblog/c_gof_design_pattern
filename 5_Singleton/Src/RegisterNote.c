/*
 * RegisterNote.c
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */

#include <RegisterNote.h>

RegisterNote *singleton = NULL;

RegisterNote *RegisterNote_getInstance() {
    if (singleton == NULL) {
        singleton = (RegisterNote*)malloc(sizeof(RegisterNote));
        for (uint16_t i = 0; i < 5; i++) {
            singleton->names[i] = i;
            singleton->registered[i] = false;
        }
    }

    return singleton;
}
