#include <iostream>
#include <string>
#include "Entitate.h"
#include "Repo.h"
#include "Teste.h"
#include <conio.h> 
#include "Service.h"
#include "UI.h"
#include "RepoFile.h"
using namespace std;

int main() {
	string c;
	UI ui;
	Controller ctrl;
	bool stop = false;
	while (stop == false) {
		ui.afisareMeniu();
		c = ui.get_input();
		if (c == "repo") {
			string c;
			ui.produse(ctrl);
			bool stop1 = false;
			while (stop1 == false) {
				ui.afisareMeniu1();
				c = ui.get_input();
				if (c == "adauga") {
					ui.addElem(ctrl);
				}
				if (c == "cumpara") {
					ui.alegereProdus(ctrl);
				}
				if (c == "afisare") {
					ui.afisare(ctrl);
				}
				if (c == "teste") {
					test();
				}
				if (c == "exit") {
					stop1 = true;
				}
			}
		}
		if (c == "repoFile") {
			string filename = "Laborator.txt";
			int nrlines = 10;
			bool stop2 = false;
			while (stop2 == false) {
				ui.afisareMeniu2();
				c = ui.get_input();
				ctrl.readRepoFromFile("Laborator.txt", nrlines);
				//ui.addElemFis(ctrl);
				//if (c == "adauga") {
					//ui.addElemFis(ctrl);
			//	}
				if (c == "cumpara") {
					ui.alegereProdus1(ctrl);
				}
				if (c == "afisare") {
					ui.afisareFisier(ctrl);
				}
				if (c == "teste") {
					test();
				}
				if (c == "exit") {
					stop2 = true;
				}
			}
		}
		if (c == "exit") {
			stop = true;
		}
	}

	return 0;
	//_getch();
}