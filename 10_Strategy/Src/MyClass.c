/*
 * MyClass.c
 *
 *  Created on: 2019/05/13
 *      Author: Yuk
 */

#include <MyClass.h>

typedef struct MyClassStruct {
    Comparator *comparator;
} MyClassStruct;

MyClass *MyClass_create(Comparator *comparator) {
    MyClass *myClass = (MyClass*)malloc(sizeof(MyClass));
    myClass->comparator = comparator;

    return myClass;
}

void MyClass_destroy(MyClass *myClass) {
    free(myClass);
}

int16_t MyClass_compare(MyClass *myClass, Human *human1, Human *human2) {
    return Comparator_compare(myClass->comparator, human1, human2);
}
