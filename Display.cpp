#include "Display.h"
#include <iostream>
using namespace std;

//char stat;
Display::Display()
{
}

Display::~Display()
{
}

void Display::Show()
{
	cout << "Status der Alarmanlage " << this->stat << endl;
}

void Display::SetStatus(char st)
{
	this->stat = st;
}