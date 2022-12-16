//
// Created by Amedeea LEMNARU on 12/16/2022.
//

#include "magazin.h"
#include "exc.h"

Magazin::Magazin() {}

Magazin::Magazin(const vector<shared_ptr<Imbracaminte>> &imbracaminte) : imbracaminte(imbracaminte) {}

void Magazin::Optiuni() {
    std::cout << "1. Adauga o noua haina." << '\n';
    std::cout << "2. Modifica o haina." << '\n';
    std::cout << "3. Prezentare haine. " << '\n';
    std::cout << "4. Iesire." << '\n';
}

int Magazin::AlegeOptiune(int first, int last) {
    int option = -1;
    while (option < first || option > last) {
        cout << '\n';
        cout << "Pentru a rula comanda, alegeti un numar intre " << first << " si " << last << '\n';
        Optiuni();
        cout << "Alegere: ";
        cin >> option;
    }
    return option;
}

void Magazin::option1() {
    cout << "Haina noua: " << '\n';
    cin.sync();
    while (true) {
        try {
            string denumire;
            cout << "Denumire: \n";
            cin.sync();
            getline(cin, denumire);
            if (denumire == "pantaloni") {
                Pantaloni *p = new Pantaloni;
                cin >> *p;
                imbracaminte.push_back(static_cast<const shared_ptr<Imbracaminte>>(new Pantaloni(*p)));
                break;
            } else if (denumire == "fusta") {
                Fusta *f = new Fusta;
                cin >> *f;
                imbracaminte.push_back(static_cast<const shared_ptr<Imbracaminte>>(new Fusta(*f)));
                break;
            } else if (denumire == "bluza") {
                Bluza *b = new Bluza;
                cin >> *b;
                imbracaminte.push_back(static_cast<const shared_ptr<Imbracaminte>>(new Bluza(*b)));
                break;
            } else throw DenInval();
        }
        catch (const DenInval &err) {
            cout << err << '\n';
        }
    }
}

void Magazin::option2() {
    try {
        unsigned long long index;
        cout << "index: ";
        cin >> index;
        if (index > imbracaminte.size())
            throw OutOfRange();
        else {
            cout << "Aici vom modifica datele uneia dintre hainele existente." << '\n';
            while (true) {
                try {
                    string denumire;
                    cout << "Denumire: ";
                    cin.sync();
                    std::getline(cin, denumire);
                    if (denumire == "pantaloni") {
                        shared_ptr<Pantaloni> p = dynamic_pointer_cast<Pantaloni>(imbracaminte[index]);
                        cin >> *p;
                        break;
                    } else if (denumire == "fusta") {
                        shared_ptr <Fusta> f = dynamic_pointer_cast<Fusta>(imbracaminte[index]);
                        cin >> *f;
                        break;
                    } else if (denumire == "bluza") {
                        shared_ptr <Bluza> b = dynamic_pointer_cast<Bluza>(imbracaminte[index]);
                        cin >> *b;
                        break;
                    } else throw DenInval();
                }
                catch (const DenInval &err) {
                    cout << err << '\n';
                    break;
                }
            }
        }
    }
    catch (const OutOfRange &err) {
        cout << err << '\n';
    }
}

void Magazin::option3() {
    for (unsigned long long i = 0; i < imbracaminte.size(); i++)
        if (shared_ptr <Pantaloni> p = dynamic_pointer_cast<Pantaloni>(imbracaminte[i]))
            cout << *p << '\n';
    cout << '\n';
    for (unsigned long long i = 0; i < imbracaminte.size(); i++)
        if (shared_ptr <Fusta> f = dynamic_pointer_cast<Fusta>(imbracaminte[i]))
            cout << *f << '\n';
    cout << '\n';
    for (unsigned long long i = 0; i < imbracaminte.size(); i++)
        if (shared_ptr<Bluza> b = dynamic_pointer_cast<Bluza>(imbracaminte[i]))
            cout << *b << '\n';
    cout << '\n';
}

void Magazin::mainLoop() {
    while (true) {
        int option = AlegeOptiune(1, 4);
        if (option == 1) {
            option1();
        } else if (option == 2) {
            option2();
        } else if (option == 3) {
            option3();
        } else if (option == 4) {
            break;
        }
    }
    cout << '\n';
    cout << "---------------------------------";
    cout << '\n';
    cout << "Programul s-a incheiat cu success\n";
}

int Magazin::id = 0;

Magazin::~Magazin() {
    imbracaminte.clear();
}

