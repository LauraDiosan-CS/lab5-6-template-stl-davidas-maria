#include "Repo.h"
#include "Entitate.h"
#include <iostream>
#include"testeEntitate.h"
#include"testeRepo.h"

using namespace std;
void read(Produs& c)
{
	int nrInmatriculare;
	string numeProfesor,status;
	cout << " Introduceti un client nou: " << "\n";
	cout << " nume profesor =";
	cin >> numeProfesor;
	cout << " status = ";
	cin >> status;
	cout << " nr inatriculare = ";
	cin >> nrInmatriculare;
	c = Produs(numeProfesor, status, nrInmatriculare);
}

/*
void print(Produs e) {
	cout << " Date : ";
	cout << " Nume: " << e.get_numeProfesor() << " - status -" << e.get_status() << "- nr inmatriculare - " << e.get_nrInmatriculare() << "\n";
}

void printAll(Repo r)
{
	return r.getALL();
	cout << "date: " << "\n";
	vector<Produs>rep = r.getALL();
	for (int i = 0; i < rep.size(); i++)
		print(rep[i]);
}
*/

void optiuni()
{
	cout << "0. Exit" << endl << "1.Citire lista :" << endl << "2.Afisare" << endl;
	cout  << "3.Teste" << endl;
}
int main()
{
	Repo<Produs> v2;
	bool ok = true;
	int op;
	optiuni();
	while (ok == true)
	{
		cout << "operatia aleasa este ";
		cin >> op;
		if (op == 0)
		{
			ok = false;
		}
		if (op == 1)
		{ 
			Produs p;
			read(p);
		}
		if (op == 2)
		{    
			//Produs p;
			//getALL();
			//printVector<Produs, 5>(v2);
		}
		
		if (op == 3)
		{
			test_entitate();
			test_repo();

		}
	}





	return 0;
}