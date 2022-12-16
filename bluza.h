//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "imbracaminte.h"
#ifndef OOP_BLUZA_H
#define OOP_BLUZA_H

class Bluza : public Imbracaminte {
private:
    string maneci;
public:
    Bluza();

    Bluza(const Bluza &ob);

    Bluza(const string &culoare, const string &firma, const float &pret, string maneci);

    const string &getManeci() const;

    void setManeci(string maneci_);

    Bluza &operator=(const Bluza &ob);

    void PretProd() const override;

    void print(std::ostream &) const override;

    void read(std::istream &) override;

    ~Bluza();

};


#endif //OOP_BLUZA_H
