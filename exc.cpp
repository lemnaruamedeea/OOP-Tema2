//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "exc.h"

const char *DenInval::what() const noexcept {
    return "Denumire invalida";
}

void DenInval::print(std::ostream &os) const {
    os<<this->what();
}

const char *OutOfRange::what() const noexcept {
    return "Nu are ce obiect sa se modifice (index prea mare)";
}

void OutOfRange::print(std::ostream &os) const {
    os<< this->what();
}
