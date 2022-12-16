//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <exception>
#include "IOSWrite.h"
#ifndef OOP_EXC_H
#define OOP_EXC_H
class DenInval : public std::exception, public IOSW{
public:
    DenInval() = default;

    const char * what() const noexcept override;

    void print(std::ostream &) const override;
};

class OutOfRange: public std::exception, public IOSW{
public:
    OutOfRange() = default;

    const char * what() const noexcept override;

    void print(std::ostream &) const override;
};

#endif //OOP_EXC_H
