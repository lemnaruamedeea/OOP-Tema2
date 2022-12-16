//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "IOSWrite.h"

IOSW::~IOSW() = default;

std::ostream &operator<<(std::ostream &os, const IOSW &ob) {
    ob.print(os);
    return os;
}
