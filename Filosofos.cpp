#include "stdafx.h"
#include "Filosofos.h"
#include "Tenedores.h"


Filosofos::Filosofos()
{
}


Filosofos::~Filosofos()
{
}

void Filosofos::eat()
{
	Tenedores tenedor;
	
	//aqui comen :(
	
}

void Filosofos::run()
{
	DWORD d1;
	HANDLE h1 = CreateThread(nullptr, 0, filosofo_thread, (PVOID)this, 0, &d1);
	DWORD d2;
	HANDLE h2 = CreateThread(nullptr, 0, filosofo_thread, (PVOID)this, 0, &d2);
	DWORD d3;
	HANDLE h3 = CreateThread(nullptr, 0, filosofo_thread, (PVOID)this, 0, &d3);
	DWORD d4;
	HANDLE h4 = CreateThread(nullptr, 0, filosofo_thread, (PVOID)this, 0, &d4);
	DWORD d5;
	HANDLE h5 = CreateThread(nullptr, 0, filosofo_thread, (PVOID)this, 0, &d5);


}

int Filosofos::getId()
{
	return id;
}

void Filosofos::setId(int id)
{
	this->id = id;
}

DWORD WINAPI Filosofos::filosofo_thread(PVOID param)
{
	Filosofos * fiptr = (Filosofos*)param;
	fiptr->eat();
	return 0;
}
