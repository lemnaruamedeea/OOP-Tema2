//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <iostream>
#include "IOSWrite.h"
#include "IOSRead.h"

#ifndef OOP_IMBRACAMINTE_H
#define OOP_IMBRACAMINTE_H

using namespace std;

class Imbracaminte : public IOSR, public IOSW
{
protected:
    string culoare;
    string firma;
    float pret;
public:
    Imbracaminte();

    Imbracaminte(const string &culoare, const string &firma, const float &pret);

    Imbracaminte(const Imbracaminte &);

    const string &getCuloare() const;

    const string &getFirma() const;

    const float &getPret() const;

    void setCuloare(const string &culoare_);

    void setFirma(const string &firma_);

    void setPret(const float &pret_);

    virtual void PretProd() const =0;

    Imbracaminte& operator=(const Imbracaminte& ob);

    bool operator==(const Imbracaminte &rhs) const;

    bool operator!=(const Imbracaminte &rhs) const;

    virtual ~Imbracaminte();

};

#endif //OOP_IMBRACAMINTE_H
