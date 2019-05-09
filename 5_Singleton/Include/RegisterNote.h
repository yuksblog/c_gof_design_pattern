/*
 * RegisterNote.h
 *
 *  Created on: 2019/05/09
 *      Author: Yuk
 */
#ifndef REGISTERNOTE_H_
#define REGISTERNOTE_H_

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>

typedef enum BookName {
    BookName_JUMP,
    BookName_SUNDAY,
    BookName_CHAMPION,
    BookName_NAKAYOSHI,
    BookName_RIBON
} BookName;

typedef struct RegisterNote {
    BookName names[5];
    bool registered[5];
} RegisterNote;

extern RegisterNote *RegisterNote_getInstance();

#endif /* REGISTERNOTE_H_ */
