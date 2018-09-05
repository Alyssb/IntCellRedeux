//
// Created by ajs41 on 8/31/2018.
//

#include "IntCell.h"

IntCell::IntCell(int initialValue) : storedValue{initialValue} {}
int
IntCell::read() const
{
    return storedValue;
}

