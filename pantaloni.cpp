//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "pantaloni.h"

Pantaloni :: Pantaloni() {}

Pantaloni :: Pantaloni(const Pantaloni &ob) : Imbracaminte(ob)
{
    stil=ob.stil;
}

Pantaloni :: Pantaloni(const string &culoare, const string &firma, const float &pret, const string &stil) : Imbracaminte(culoare, firma, pret), stil(stil) {}

const string& Pantaloni :: getStil() const
{
    return stil;
}

void Pantaloni :: setStil(const string &stil_)
{
    Pantaloni::stil = stil_;
}

Pantaloni &Pantaloni :: operator=(const Pantaloni &ob)
{
    stil=ob.stil;
    return *this;
}

void Pantaloni :: PretProd() const
{
cout << pret*5 << endl;
}

void Pantaloni::print(ostream &os) const {
    os << "Culoare: ";
    os << getCuloare() << "\n";
    os << "Firma: ";
    os << getFirma() << "\n";
    os << "Pret: ";
    os << getPret() << "\n";
    os << "Stil: ";
    os << getStil() << "\n";
}

void Pantaloni::read(istream &is)
{
    std::string culoare_;
    std::string firma_;
    float pret_;
    cin.sync();
    cout << "Culoare: ";
    std::getline(cin,culoare_);
    cout << "Firma: ";
    std::getline(cin,firma_);
    cout << "Pret: ";
    std::cin>>pret_;
    Imbracaminte::setCuloare(culoare_);
    Imbracaminte::setFirma(firma_);
    Imbracaminte::setPret(pret_);
    cout << "Stil: ";
    is>>stil;
}

Pantaloni :: ~Pantaloni() {}


