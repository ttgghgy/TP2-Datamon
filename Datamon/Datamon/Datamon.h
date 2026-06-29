#pragma once
#include <string>

class Datamon {
private:
	const std::string m_name;
	const unsigned char m_maxHP;
	char m_currentHP;
	unsigned char m_atk;
	unsigned char m_def;

public:
	virtual void CreateDatamon();

	Datamon(std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
	Datamon(std::string name);
	~Datamon();
};