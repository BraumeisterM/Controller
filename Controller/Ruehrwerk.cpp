#include "Ruehrwerk.h"



Ruehrwerk::Ruehrwerk()
{

}


Ruehrwerk::~Ruehrwerk()
{
}


void Ruehrwerk::Motor_ON()
{
	// Motor ein
	bMotor = true;
}


void Ruehrwerk::Motor_OFF()
{
	// Motor aus
	bMotor = false;
}


bool Ruehrwerk::IsMotorOn()
{
	// Motor ein?
	return bState_Motor;
}


void Ruehrwerk::CheckMotor()
{
	// Wenn Motor läuft und kein Strom gemessen wird -> Error
	if ((bMotor and !bState_Motor) || (!bMotor & bState_Motor))
	{
		basic.Error = true;
	}
}


void Ruehrwerk::Main()
{
	// Zyklische Aufrufe
	
	// Timeraufruf des aktuellen Timers
	gettimeofday(&act, nullptr);

	// Positive Flanke des Motors
	if ((bLastState_Motor = false) & (bState_Motor = true))
	{
		gettimeofday(&start, nullptr);
	}
	
	// Nach Zeitverzögerung und eingeschaltetem Motor wird auf Fehler überprüft
	if (((start.tv_sec - act.tv_sec) > 1) & (bLastState_Motor = true) & (bState_Motor = true))
	{
		this->CheckMotor();
	}

	// Wenn Motor aus ist wird Timer zurückgesetzt
	if (((bLastState_Motor = true) & (bState_Motor = false)) || ((bLastState_Motor = false) & (bState_Motor = false)))
	{
		start.tv_sec = act.tv_sec;
	}

	// Statuszuweisung des letzten Durchlaufs
	bLastState_Motor = bState_Motor;
}
