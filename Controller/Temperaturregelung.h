#pragma once
#include "Herdplatte.h"
#include "Temperatursensor.h"
#include "Basis.h"

class Temperaturregelung : Herdplatte,Temperatursensor, Basis
{
public:
	Temperaturregelung();
	~Temperaturregelung();
	void Main();
};

