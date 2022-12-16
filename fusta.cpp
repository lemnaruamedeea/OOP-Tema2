//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "fusta.h"

Fusta :: Fusta() {}

Fusta :: Fusta(const Fusta &ob) : Imbracaminte(ob)
{
    tip=ob.tip;
}

Fusta :: Fusta(const string &culoare, const string &firma, const float &pret, const string &tip) : Imbracaminte(culoare, firma, pret), tip(tip) {}

const string& Fusta :: getTip() const
{
    return tip;
}

void Fusta :: setTip(const string &tip_)
{
    Fusta::tip = tip_;
}

Fusta &Fusta :: operator=(const Fusta &ob)
{
    tip=ob.tip;
    return *this;
}

void Fusta :: PretProd() const
{
    cout << pret*3;
}

Fusta :: ~Fusta() {}

void Fusta::print(ostream &os) const {
    os << "Culoare: ";
    os << getCuloare() << "\n";
    os << "Firma: ";
    os << getFirma() << "\n";
    os << "Pret: ";
    os << getPret() << "\n";
    os << "Tip: ";
    os << getTip() << "\n";
}

void Fusta::read(istream &is) {
    std::string culoare_;
    std::string firma_;
    float pret_;
    cout << "Culoare: ";
    std::getline(cin,culoare_);
    cout << "Firma: ";
    std::getline(cin,firma_);
    cout << "Pret: ";
    std::cin>>pret_;
    Imbracaminte::setCuloare(culoare_);
    Imbracaminte::setFirma(firma_);
    Imbracaminte::setPret(pret_);
    cout << "Tip: ";
    is>>tip;
}
