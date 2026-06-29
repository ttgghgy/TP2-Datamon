#include "DatamonBios.h"

DatamonBios::DatamonBios(const std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def) : Datamon(name, maxHP, atk, def)
{
	m_type = ETypes::bios;

	m_abilities[0] = Ability::s_biosAbilities[0];
	m_abilities[1] = Ability::s_biosAbilities[1];
	m_abilities[2] = Ability::s_biosAbilities[2];
	m_abilities[3] = Ability::s_biosAbilities[3];
}


