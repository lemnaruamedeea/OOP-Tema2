//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "IOSRead.h"

std::istream &operator>>(std::istream & is, IOSR & ob) {
    ob.read(is);
    return is;
}

IOSR::~IOSR() =default;
