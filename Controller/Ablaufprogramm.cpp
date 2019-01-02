#include "Ablaufprogramm.h"



Ablaufprogramm::Ablaufprogramm()
{
}


Ablaufprogramm::~Ablaufprogramm()
{
}


void Ablaufprogramm::Main()
{
	// TODO: Fügen Sie hier Ihren Implementierungscode ein..
	obRuehrwerk.Main();
	obDB.Main();
	obTempRegelung.Main();
	obUeberwachung.Main();
}
