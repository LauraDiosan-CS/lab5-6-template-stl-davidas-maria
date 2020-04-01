#include "Entitate.h"
#include <iostream>
#include<string>
using namespace std;

//constructor fara parametrii
Produs::Produs()
{
	this->numeProfesor = "";
	this->nrInmatriculare = 0;
	this->status = "";
}

//constructor cu parametrii
Produs::Produs( string nume,string status, int nr)
{
	this->numeProfesor = nume;
	this->nrInmatriculare = nr;
	this->status = status;
}

//constructor de copiere
Produs::Produs(const Produs& p)
{
	this->numeProfesor = p.numeProfesor;
	this->status = p.status;
	this->nrInmatriculare = p.nrInmatriculare;
}

//seteaza numele
void Produs::set_numeProfesor(string numeProfesor)
{
	this->numeProfesor = numeProfesor;
}

//returneaza un nume
string Produs::get_numeProfesor()
{
	return this->numeProfesor;
}

//seteaza cod-ul 
void Produs::set_nrInmatriculare(int nrInmatriculare)
{
	this->nrInmatriculare = nrInmatriculare;
}

//returneaza un cod
int Produs::get_nrInmatriculare()
{
	return this->nrInmatriculare;
}

//seteaza un cod pret
void Produs::set_status(string status)
{
	this->status = status;
}

//returneaza un  pret
string Produs::get_status()
{
	return this->status;
}

//toString
string Produs::toString()
{
	string result = "";
	result += " nume profesor: ";
	result += this->get_numeProfesor();
	result += "status: ";
	result += this->get_status();
	result += " nr inmatriculare: ";
	result += std::to_string(this->get_nrInmatriculare());
	return result;
}

//operatorul egal =
Produs& Produs::operator=(const Produs& f)
{
	if (this != &f) {
		this->set_status(f.status);
		this->set_numeProfesor(f.numeProfesor);
		this->set_nrInmatriculare(f.nrInmatriculare);
	}
	else
		cout << "self assignment ... " << endl;
	return *this;
}
bool Produs:: operator==(Produs& f)
{
	return (this->numeProfesor == f.numeProfesor) && (this->status == f.status) && (this->nrInmatriculare == f.nrInmatriculare);
}
bool Produs:: operator<(Produs& f)
{
	if (nrInmatriculare < f.nrInmatriculare)
		return true;
	return false;
}

//compara doua obiecte
bool Produs:: operator>(Produs& f)
{
	if (nrInmatriculare > f.nrInmatriculare)
		return true;
	return false;
}
//destructor
Produs::~Produs()
{
}
