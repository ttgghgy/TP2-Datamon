#include "DatamonOverclock.h"

DatamonOverclock::DatamonOverclock(const std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def) : Datamon(name, maxHP, atk, def)
{
	m_type = ETypes::overclock;

	m_abilities[0] = Ability::s_overclockAbilities[0];
	m_abilities[1] = Ability::s_overclockAbilities[1];
	m_abilities[2] = Ability::s_overclockAbilities[2];
	m_abilities[3] = Ability::s_overclockAbilities[3];
}


