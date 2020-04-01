#pragma once
#include <string>
#include<iostream>
using namespace std;
class Produs
{
private:
	string numeProfesor,status;
	int nrInmatriculare;

public:
	Produs();
	Produs(string nume, string status, int nr);
	Produs(const Produs& p);
	Produs& operator=(const Produs& f);
	string get_numeProfesor();
	int get_nrInmatriculare();
	string get_status();
	void set_numeProfesor(string numeProfesor);
	void set_nrInmatriculare(int nrInmatriculare);
	void set_status(string status);
	string toString();
	bool operator==(Produs& f);
	bool operator<(Produs& f);
	bool operator>(Produs& f);
	~Produs();
	friend ostream& operator<<(ostream& os, Produs& s)
	{
		os << "nume profesor=  " << s.numeProfesor << "status=  " << s.status << "nr inmatriculare= " << s.nrInmatriculare << endl;
		return os;
	}
	friend istream& operator>>(istream& is, Produs& f) {
		int nrInmatriculare;
		string numeProfesor, status;
	
		cout << "numeProfesor= ";
		is >> numeProfesor;
		f.set_numeProfesor(numeProfesor);
		cout << "status= ";
		is >> status;
		f.set_status(status);
		cout << "nrInmatriculare= ";
		is >> nrInmatriculare;
		f.set_nrInmatriculare(nrInmatriculare);
		return is;
	}
};

