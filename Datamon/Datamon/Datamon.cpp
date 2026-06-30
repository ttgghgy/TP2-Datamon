#include "Datamon.h"
#include <iostream>
#include <string>

using namespace std;

/*
Datamon::Datamon()
{
	cout << "ctor called with name, hp,atk and def params" << endl;
}
*/

void Datamon::CreateDatamon()
{

}

Datamon::Datamon(std::string name, const unsigned char hpStat, const unsigned char atk, const unsigned char def) :
	m_name(name),
	m_hpStat(hpStat),
	m_maxHP(hpStat * 5),
	m_currentHP(hpStat * 5),
	m_atk(atk),
	m_def(def)
{
	cout << "Datamon ctor called with name, hp,atk and def params" << m_name << endl;
}

Datamon::Datamon(std::string name) :
	m_name(name),
	m_maxHP(0),
	m_currentHP(0),
	m_hpStat(0),
	m_atk(0),
	m_def(0)
{
	cout << "Datamon ctor called with name: " << m_name << endl;
}

Datamon::~Datamon()
{
	cout << "Datamon dtor called. Datamon " << m_name << " has been released from his duty" << endl;
}

ETypes Datamon::GetType()
{
	return m_type;
}

std::string Datamon::GetTypeString() {
	switch (m_type) {

	case ETypes::bios:
		return "BIOS";
	case ETypes::overclock:
		return "Overclock";
	case ETypes::powershell:
		return "Powershell";
	case ETypes::virus:
		return "Virus";
	default:
		return "N/A";
	}
}

std::string Datamon::GetName()
{
	return m_name;
}

unsigned char Datamon::GetHPStat() 
{
	return m_hpStat;
}

unsigned char Datamon::GetATK()
{
	return m_atk;
}

unsigned char Datamon::GetDEF()
{
	return m_def;
}
