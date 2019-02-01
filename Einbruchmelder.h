#pragma once
#include "Melder.h"

class Einbruchmelder : public Melder
{
public:
	Einbruchmelder();
	~Einbruchmelder();
	void GibAlarm();
};