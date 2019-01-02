#pragma once
#include "I_to_I2C.h"
#include "Basis.h"

class Anlagenueberwachung : I_to_I2C, Basis
{
public:
	Anlagenueberwachung();
	~Anlagenueberwachung();
	void Main();
};

