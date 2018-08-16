#pragma once
#include <Windows.h>


class Filosofos
{
public:
	Filosofos();
	~Filosofos();
	void run();
	void eat();
	int getId();
	void setId(int id);
	static DWORD WINAPI filosofo_thread(PVOID param);


private:
	int id;
};

