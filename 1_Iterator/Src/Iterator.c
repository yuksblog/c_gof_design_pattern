/*
 * Iterator.c
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <Iterator.h>

bool Iterator_hasNext(Iterator* ite) {
    return ite->hasNext(ite);
}

void *Iterator_next(Iterator* ite) {
    return ite->next(ite);
}
