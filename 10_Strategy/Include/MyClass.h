/*
 * MyClass.h
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */
#ifndef MYCLASS_H_
#define MYCLASS_H_

#include <Comparator.h>

typedef struct MyClassStruct MyClass;

extern MyClass *MyClass_create(Comparator *comparator);

extern void MyClass_destroy(MyClass *myClass);

extern int16_t MyClass_compare(MyClass *myClass, Human *human1, Human *Human2);

#endif /* MYCLASS_H_ */
