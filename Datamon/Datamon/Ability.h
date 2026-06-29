#pragma once
#include <iostream>
#include <string>

class Ability {
	const std::string m_name;
	const unsigned short int m_power;
	const unsigned char m_accuracy;
	const unsigned char m_critChance;

	const static Ability* m_virusAbilities[4];
	const static Ability* m_biosAbilities[4];
	const static Ability* m_powershellAbilities[4];
	const static Ability* m_overclockAbilities[4];

public:
	Ability(std::string name, const unsigned short int power, const unsigned char accuracy, const unsigned char crit);
	~Ability();
};