//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include "bluza.h"

Bluza :: Bluza() {}

Bluza :: Bluza(const Bluza &ob) : Imbracaminte()
{
    maneci = ob.maneci;
}

Bluza :: Bluza(const string &culoare, const string &firma, const float &pret, string maneci) : Imbracaminte(culoare, firma, pret), maneci(maneci) {}

const string& Bluza :: getManeci() const
{
    return maneci;
}

void Bluza :: setManeci(string maneci_)
{
    Bluza::maneci = maneci_;
}

Bluza &Bluza :: operator=(const Bluza &ob)
{
    maneci = ob.maneci;
    return *this;
}

void Bluza :: PretProd() const
{
    cout << pret * 2;
}

Bluza :: ~Bluza() {}

void Bluza::read(istream & is) {
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
    cout << "Maneci: ";
    is>>maneci;
}

void Bluza::print(ostream & os) const {
    os << "Culoare: ";
    os << getCuloare() << "\n";
    os << "Firma: ";
    os << getFirma() << "\n";
    os << "Pret: ";
    os << getPret() << "\n";
    os << "Maneci: ";
    os << getManeci() << "\n";

}
