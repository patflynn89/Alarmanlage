#include "pch.h"
#include "Alarmanlage.h"
#include "Schließanlage.h"
#include "Display.h"
#include <iostream>
using namespace std;

Alarmanlage::Alarmanlage(Schließanlage* schl)
{
	ihreSchließanlage = schl;
}

Alarmanlage::~Alarmanlage()
{
}

void Alarmanlage::SetFeuer()
{
	cout << "Es brennt!" << endl;
}

void Alarmanlage::SetEinbruch()
{
	cout << "Es wurde eingebrochen!" << endl;
	ihrDisplay.SetStatus('Einbruch !');
}

void Alarmanlage::Reset()
{
	cout << "Reset!" << endl;
}

void Alarmanlage::ShowStatus()
{
	cout << ihrDisplay.Show << endl;
}
