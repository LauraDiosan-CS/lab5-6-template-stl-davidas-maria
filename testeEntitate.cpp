#include "testeEntitate.h"
#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
void test_entitate()
{
	Produs p = Produs();
	assert(p.get_numeProfesor() == "");
	assert(p.get_nrInmatriculare() == 0);
	assert(p.get_status() == "");

	Produs p1 = Produs("alin", "liber",162);
	assert(p1.get_numeProfesor() == "alin");
	assert(p1.get_nrInmatriculare() == 162);
	assert(p1.get_status() == "liber");

	p = Produs(p1);
	assert(p.get_numeProfesor() == "alin");
	assert(p.get_nrInmatriculare() == 162);
	assert(p.get_status() == "liber");

	cout << "Testele pt entitate au trecut!" << endl;
}