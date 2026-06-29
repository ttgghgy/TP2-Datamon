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


const Ability* Ability::s_virusAbilities[4] =     {	   new Ability("Virus Ability 1", 50, 100, 0),
												  	   new Ability("Virus Ability 2", 50, 100, 0),
												 	   new Ability("Virus Ability 3", 50, 100, 0),
													   new Ability("Virus Ability 4", 50, 100, 0)};

const Ability* Ability::s_biosAbilities[4] = {		   new Ability("BIOS Ability 1", 50, 100, 0),
													   new Ability("BIOS Ability 2", 50, 100, 0),
													   new Ability("BIOS Ability 3", 50, 100, 0),
													   new Ability("BIOS Ability 4", 50, 100, 0) };

const Ability* Ability::s_overclockAbilities[4] =	  {new Ability("Overclock Ability 1", 50, 100, 100),
													   new Ability("Overclock Ability 2", 50, 100, 100),
													   new Ability("Overclock Ability 3", 50, 100, 100),
													   new Ability("Overclock Ability 4", 50, 100, 100) };

const Ability* Ability::s_powershellAbilities[4] = {   new Ability("PowerShell Ability 1", 50, 100, 0),
													   new Ability("PowerShell Ability 2", 50, 100, 0),
													   new Ability("PowerShell Ability 3", 50, 100, 0),
													   new Ability("PowerShell Ability 4", 50, 100, 0)};