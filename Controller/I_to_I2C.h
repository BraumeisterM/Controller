#pragma once
#include "I2C.h"

class I_to_I2C : I2C
{
public:
	I_to_I2C();
	~I_to_I2C();
private:
	I2C con;
};

