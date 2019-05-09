/*
 * Chairperson.h
 *
 *  Created on: 2019/05/07
 *      Author: Yuk
 */

#ifndef CHAIRPERSON_H_
#define CHAIRPERSON_H_

typedef struct Chairperson {
    void (*organizeClass)(struct Chairperson *chair);
} Chairperson;

extern void Chairperson_organizeClass(Chairperson *chair);

#endif /* CHAIRPERSON_H_ */
