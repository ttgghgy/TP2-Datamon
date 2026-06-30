#pragma once
#include <string>
#include "Ability.h"
#include <string>

enum class ETypes {
	bios,
	overclock,
	powershell,
	virus,
	count
};

class Datamon {
protected:
	ETypes m_type = ETypes::count;

	std::string m_name;
	unsigned char m_maxHP;
	char m_currentHP;

	unsigned char m_hpStat;
	unsigned char m_atk;
	unsigned char m_def;

public:
	Ability* m_abilities[4];

	virtual void CreateDatamon();

	ETypes GetType();
	std::string GetTypeString();

	std::string GetName();
	unsigned char GetHPStat();
	unsigned char GetATK();
	unsigned char GetDEF();

	Datamon(const std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
	Datamon(std::string name);
	~Datamon();
};

