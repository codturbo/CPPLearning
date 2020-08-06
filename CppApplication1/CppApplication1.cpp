// CppApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include "B.h"


int* test1();
const int* TAB(const int* p1, int* b /* = NULL */);
void TAB1(int pGet, int pq /* = NULL */, int** pTrackMsg /* = NULL */);
struct LimitEnvelopePoint_t
{
	double a, b, c, d, e;
};
static LimitEnvelopePoint_t photoDiodeUpperRising[] = {
	{   1.20, 1.30, 10.10, 1.15, 10.20},
	{2000, 1.80, 0.0, 1.50, 0.0},
	{   0, 1.30, 0.0, 1.15, 0.0},
	
};

void FuncA(B b1)
{
	std::cout << b1.m_aa << std::endl;
}

int main()
{
	//#pragma pack(6)
	struct alignA
	{
		short shA; //2
		long lA; //4
		char cA; //1
	};
	struct alignB
	{
		char c;	//1
		alignA aA;	//4
		short shA;	//2
	};
	

	B bb1{};
	bb1.FuncA(bb1);
	FuncA(bb1);
	bb1.FuncB();

	//std::cin;
	return 0;
}

/**/
int* test1()
{
	int a = 9;
	std::cout << &a << std::endl;
	return &a;
}
/// <summary>
/// zzz
/// </summary>
/// <param name="p1">1231</param>
/// <param name="b">676</param>
const int* TAB(const int* p1, int* b /* = NULL */)
{
	int a=0;
	*b = 300;
	p1 = &a;
	
	return p1;
}
void TAB1(int pGet, int pq /* = NULL */, int** pTrackMsg /* = NULL */)
{
	pGet = 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
