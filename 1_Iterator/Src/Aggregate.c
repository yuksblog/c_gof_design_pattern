/*
 * Aggregate.h
 *
 *  Created on: 2019/05/05
 *      Author: Yuk
 */

#include <Aggregate.h>

Iterator *Aggregate_iterator(Aggregate *agr) {
    return agr->iterator(agr);
}
