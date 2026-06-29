#include "Datamon.h"
#include <iostream>

using namespace std;

/*
Datamon::Datamon()
{
	cout << "ctor called with name, hp,atk and def params" << endl;
}
*/

Datamon::~Datamon()
{
	cout << "dtor called. Datamon " << m_name << " has been released from his duty" << endl;
}

void Datamon::CreateDatamon() 
{

}