#pragma once
#ifndef REPO_H
#define REPO_H
#include "Entitate.h"
#include <iostream>
#include<vector>
using namespace std;

template <class T, int CAP = 100> class Repo
{
private:
	int size;
	vector<T>list;
public:
	Repo();
	~Repo();
	void addElem(T);
	void deleteElem();
	vector<T> getALL();
	int getSize();
	void deletePos(int pos);

};

template <class T, int CAP> Repo<T, CAP>::Repo()
{

}

template <class T, int CAP> Repo<T, CAP>::~Repo()
{

}

template <class T, int CAP> void Repo<T, CAP>::addElem(T a)
{
	list.push_back(a);
	this->size++;
}

template <class T, int CAP> void Repo<T, CAP>::deleteElem()
{
	list.pop_back();
	size--;
}
//returneaza un element


template <class T, int CAP> void Repo<T, CAP>::deletePos(int pos)
{
	list.erase(list.begin() + pos);
	size--;
}

template <class T, int CAP>vector<T> Repo<T, CAP>::getALL()
{
	return list;
}


template <class T, int CAP> int Repo<T, CAP>::getSize()
{
	return this->size;
}



#endif;