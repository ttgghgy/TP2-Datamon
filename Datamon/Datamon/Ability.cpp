#include "Ability.h"

using namespace std;


Ability::Ability(std::string name, const unsigned short int power, const unsigned char accuracy, const unsigned char crit) : 
	m_name(name), 
	m_power(power), 
	m_accuracy(accuracy), 
	m_critChance(crit)
{
	cout << "Ability created: " << m_name << endl;
}

Ability::~Ability() {
	cout << "Ability destroyed: " << m_name << endl;
}


const Ability* Ability::m_virusAbilities[4] =     {new Ability("Virus Ability 1", 50, 100, 0),
												   new Ability("Virus Ability 2", 50, 100, 0),
												   new Ability("Virus Ability 3", 50, 100, 0),
												   new Ability("Virus Ability 4", 50, 100, 0)};