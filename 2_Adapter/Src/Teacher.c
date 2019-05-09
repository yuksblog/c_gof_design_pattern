/*
 * Teacher.c
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#include <Teacher.h>

void Teacher_doMain() {
    Hanako *hanako = Hanako_create();
    Chairperson_organizeClass((Chairperson*)hanako);
    Hanako_destroy(hanako);
}
