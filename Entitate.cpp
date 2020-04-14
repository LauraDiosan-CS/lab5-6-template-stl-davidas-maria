#include"Entitate.h"

//constructor fara parametrii
Produs::Produs() {
	this->cod = 0;
	this->nume = "";
	this->pret = 0;
}
//constructor cu parametrii
Produs::Produs(int cod, string nume, int pret) {
	this->cod = cod;
	this->nume = nume;
	this->pret = pret;
}

//constructor de copiere
Produs::Produs(const Produs& p) {
	this->cod = p.cod;
	this->nume = p.nume;
	this->pret = p.pret;
}
//destructor
Produs::~Produs() {

}
//getter pt cod
int Produs::getCod() {
	return this->cod;
}
//getter pt nume
string Produs::getNume() {
	return this->nume;
}
//getter pt pret
int Produs::getPret() {
	return this->pret;
}
//setter pt cod
void Produs::setCod(int cod) {
	this->cod = cod;
}
//setter pt nume
void Produs::setNume(string nume) {
	this->nume = nume;
}
//setter pt pret
void Produs::setPret(int pret) {
	this->pret = pret;
}
//afisare
void Produs::afisare() {
	cout << this->cod << "-" << this->nume << "-" << this->pret << endl;
}

//suprascrie operatorul = pentru elem de tip entitate
Produs& Produs::operator=(const Produs& e) {
	if (this != &e) {
		this->setCod(e.cod);
		this->setNume(e.nume);
		this->setPret(e.pret);
	}
	else
		cout << "self assignment ... " << endl;
	return *this;
}