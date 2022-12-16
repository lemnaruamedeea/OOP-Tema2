//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <iostream>
#ifndef OOP_IOSWRITE_H
#define OOP_IOSWRITE_H
class IOSW {
protected:
    virtual void print(std::ostream &) const = 0;

    friend std::ostream &operator<<(std::ostream &, const IOSW &);

    virtual ~IOSW();
};
#endif //OOP_IOSWRITE_H
