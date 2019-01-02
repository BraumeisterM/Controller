#pragma once
#include "I2C_to_U.h"
#include "U_to_I2C.h"



class Herdplatte : I2C_to_U, U_to_I2C
{
public:
	Herdplatte();
	~Herdplatte();
};

