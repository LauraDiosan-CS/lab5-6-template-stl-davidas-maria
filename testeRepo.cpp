#include "testeRepo.h"
#include"Entitate.h"
#include <assert.h>
using namespace std;
void test_repo()
{
	Repo<Produs> v;
    Produs p("alin","liber",162);
	Produs p1("sorin", "ocupat", 691);
	v.addElem(p);
	v.addElem(p1);
	vector<Produs> v1;
	v1 = v.getALL();
	assert(v.getSize() == 2);
	v.deleteElem();
	assert(v.getSize() == 1);
	cout << "Testele pt repo au trecut!" << endl;
}
