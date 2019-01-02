#pragma once
#include "Basis.h"
#include "DB_Connector.h"
#include "Anlagenueberwachung.h"
#include "Ruehrwerk.h"
#include "Temperaturregelung.h"
class Ablaufprogramm : Basis,DB_Connector,Anlagenueberwachung,Ruehrwerk,Temperaturregelung
{
public:
	DB_Connector obDB;
	Anlagenueberwachung obUeberwachung;
	Ruehrwerk obRuehrwerk;
	Temperaturregelung obTempRegelung;


	Ablaufprogramm();
	~Ablaufprogramm();
	void Main();
};

