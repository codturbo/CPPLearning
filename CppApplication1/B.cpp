#include "B.h"



void B::FuncA(B b1)
{
	std::cout << this->m_ab << std::endl;

}

void B::FuncB()
{
	std::cout << this->m_aa + this->m_ab << std::endl;


}
