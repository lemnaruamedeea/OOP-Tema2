//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <iostream>
#ifndef OOP_IOSREAD_H
#define OOP_IOSREAD_H
class IOSR {
protected:
    friend std::istream &operator>>(std::istream &, IOSR &);

    virtual void read(std::istream &) = 0;

    virtual ~IOSR();
};

#endif //OOP_IOSREAD_H
