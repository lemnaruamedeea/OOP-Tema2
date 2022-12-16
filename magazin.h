//
// Created by Amedeea LEMNARU on 12/16/2022.
//
#include <iostream>
#include <vector>
#include <memory>
#include "imbracaminte.h"
#include "pantaloni.h"
#include "fusta.h"
#include "bluza.h"

#ifndef OOP_MAGAZIN_H
#define OOP_MAGAZIN_H


class Magazin {
private:
    static int id;
    vector<shared_ptr<Imbracaminte>> imbracaminte;
public:
    Magazin();

    Magazin(const vector<shared_ptr<Imbracaminte>> &imbracaminte);

    void Optiuni();

    int AlegeOptiune(int first, int last);

    void option1();

    void option2();

    void option3();

    void mainLoop();

    ~Magazin();
};

#endif //OOP_MAGAZIN_H
