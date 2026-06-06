#include "Datamon.h"
#include <iostream>

using namespace std;

Datamon::Datamon(string name, int hp, int atk, int def)
{
	cout << "ctor called with name, hp,atk and def params" << endl;
}

Datamon::~Datamon()
{
	cout << "dtor called. Datamon " << m_name << " has been released from his duty" << endl;
}
