#pragma once
#include <iostream>
#include <Windows.h>

class B
{
private:
	int m_aa=10;
	int m_ab=20;
	int m_ac = 120;
	int m_ad = 800;
public:
	int Bc=100;
	void FuncA(B b1);
	void FuncB();

	friend void FuncA(B b1);

};

