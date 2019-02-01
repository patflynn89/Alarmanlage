#pragma once
#include "Display.h"
#include "Schlie�anlage.h"

class Alarmanlage
{
public:
	Alarmanlage(Schlie�anlage* schl);
	~Alarmanlage();
	Display ihrDisplay;
	Schlie�anlage *ihreSchlie�anlage;
	void SetFeuer();
	void SetEinbruch();
	void Reset();
	void ShowStatus();
private:
	char* stat;
};