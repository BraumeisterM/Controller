#include "Ablaufprogramm.h"



Ablaufprogramm::Ablaufprogramm()
{
}


Ablaufprogramm::~Ablaufprogramm()
{
}


void Ablaufprogramm::Main()
{
	// TODO: F�gen Sie hier Ihren Implementierungscode ein..
	obRuehrwerk.Main();
	obDB.Main();
	obTempRegelung.Main();
	obUeberwachung.Main();
}
