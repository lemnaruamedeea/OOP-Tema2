//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <string>
#include "imbracaminte.h"

#ifndef OOP_PANTALONI_H
#define OOP_PANTALONI_H

class Pantaloni: public Imbracaminte
{
private:
    string stil;
public :
    Pantaloni();

    Pantaloni(const Pantaloni &ob);

    Pantaloni(const string &culoare, const string &firma, const float &pret, const string &stil);

    const string &getStil() const;

    void setStil(const string &stil_);


    Pantaloni& operator=(const Pantaloni& ob);

    void PretProd() const override;

    void print(std::ostream &) const override;

    void read(std::istream &) override;

    ~Pantaloni();

};

#endif //OOP_PANTALONI_H
