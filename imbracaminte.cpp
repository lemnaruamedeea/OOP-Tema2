//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "imbracaminte.h"

Imbracaminte :: Imbracaminte() {}

Imbracaminte :: Imbracaminte(const string &culoare, const string &firma, const float &pret) : culoare(culoare), firma(firma), pret(pret) {}

Imbracaminte :: Imbracaminte(const Imbracaminte &ob)
{
    culoare=ob.culoare;
    firma=ob.firma;
    pret=ob.pret;
}

void Imbracaminte :: PretProd() const{
    cout<<pret*2<<endl;
}

const string& Imbracaminte :: getCuloare() const
{
    return culoare;
}

const string& Imbracaminte :: getFirma() const
{
    return firma;
}

const float& Imbracaminte :: getPret() const
{
    return pret;
}

void Imbracaminte :: setCuloare(const string &culoare_)
{
    Imbracaminte :: culoare = culoare_;
}

void Imbracaminte :: setFirma(const string &firma_)
{
    Imbracaminte :: firma = firma_;
}

void Imbracaminte :: setPret(const float &pret_)
{
    Imbracaminte :: pret = pret_;
}

Imbracaminte &Imbracaminte :: operator=(const Imbracaminte &ob)
{
    culoare=ob.culoare;
    firma=ob.firma;
    pret=ob.pret;
    return *this;
}

bool Imbracaminte :: operator==(const Imbracaminte &rhs) const
{
    return culoare==rhs.culoare && firma == rhs.firma && pret==rhs.pret;
}

bool Imbracaminte :: operator!=(const Imbracaminte &rhs) const
{
    return !(rhs==*this);
}

Imbracaminte :: ~Imbracaminte() {};