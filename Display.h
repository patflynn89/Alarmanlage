#pragma once
class Display
{
public:
	Display();
	~Display();
	void Show();
	void SetStatus(char stat);

private:
	char stat;
};
