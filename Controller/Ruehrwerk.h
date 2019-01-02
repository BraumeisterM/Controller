#pragma once
#include "I_to_I2C.h"
#include "Basis.h"
#include <sys/time.h>

class Ruehrwerk : private I_to_I2C, private Basis
{


public:
	Ruehrwerk();
	~Ruehrwerk();
	void Motor_ON();
	void Motor_OFF();
private:
	bool bState_Motor;
	struct timeval start, act;
	bool bLastState_Motor;
	I_to_I2C Strommessung;

public:
	bool IsMotorOn();
	bool bMotor;
	void CheckMotor();
	Basis basic;
	void Main();
};

