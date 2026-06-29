#pragma once
#include <string>
#include "Ability.h"

enum class ETypes {
	bios,
	overclock,
	powershell,
	virus,
	count
};

class Datamon {
protected:
	ETypes m_type;

	const Ability* m_abilities[4];

	std::string m_name;
	unsigned char m_maxHP;
	char m_currentHP;

	unsigned char m_hpStat;
	unsigned char m_atk;
	unsigned char m_def;

public:
	virtual void CreateDatamon();
	
	Datamon(const std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
	Datamon(std::string name);
	~Datamon();
};

