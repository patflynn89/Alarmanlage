#pragma once
#include "Display.h"
#include "Schlieﬂanlage.h"

class Alarmanlage
{
public:
	Alarmanlage(Schlieﬂanlage* schl);
	~Alarmanlage();
	Display ihrDisplay;
	Schlieﬂanlage *ihreSchlieﬂanlage;
	void SetFeuer();
	void SetEinbruch();
	void Reset();
	void ShowStatus();
private:
	char* stat;
};