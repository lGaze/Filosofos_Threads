// filosofos_threads.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "Filosofos.h"

using namespace std;


int main()
{
	Filosofos filosofos[5];

	for (int i = 0; i < 5; i++)
	{
		filosofos[i].setId(i);
	}
		filosofos->run();

    return 0;
}

