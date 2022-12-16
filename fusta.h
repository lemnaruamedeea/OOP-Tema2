//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "imbracaminte.h"
#include <string>
#ifndef OOP_FUSTA_H
#define OOP_FUSTA_H
class Fusta: public Imbracaminte
{
private:
    string tip;
public:
    Fusta();

    Fusta(const Fusta &ob);

    Fusta(const string &culoare, const string &firma, const float &pret, const string &tip);

    const string &getTip() const;

    void setTip(const string &tip_);

    Fusta& operator=(const Fusta& ob);

    void PretProd() const override;

    void print(std::ostream &) const override;

    void read(std::istream &) override;

    ~Fusta();

};

#endif //OOP_FUSTA_H
