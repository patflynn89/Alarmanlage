#pragma once
#include "Alarmanlage.h"

class Melder
{
public:
	Melder();
	~Melder();
	virtual void GibAlarm() = 0;

protected:
	Alarmanlage* seineAlarmanlage;
};