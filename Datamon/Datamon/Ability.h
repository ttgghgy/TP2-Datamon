#pragma once
#include <iostream>
#include <string>

class Ability {
	const std::string m_name;
	const unsigned short int m_power;
	const unsigned char m_accuracy;
	const unsigned char m_critChance;

public:
	static Ability* s_virusAbilities[4];
	static Ability* s_biosAbilities[4];
	static Ability* s_powershellAbilities[4];
	static Ability* s_overclockAbilities[4];

	std::string GetName();
	unsigned short int GetPower();
	unsigned char GetAccuracy();
	unsigned char GetCritChance();

	Ability(std::string name, const unsigned short int power, const unsigned char accuracy, const unsigned char crit);
	~Ability();
};