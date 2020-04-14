#pragma once
#include<iostream>

using namespace std;

class Produs {
private:
    int cod, pret;
    string nume;
public:
    Produs();
    Produs(int cod, string nume, int pret);
    Produs(const Produs& p);
    ~Produs();
    int getCod();
    string getNume();
    int getPret();
    void setCod(int cod);
    void setNume(string nume);
    void setPret(int pret);
    void afisare();
    Produs& operator=(const Produs& e);

};