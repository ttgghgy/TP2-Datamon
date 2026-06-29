#pragma once
#include <string>

class Datamon
{
private:
	std::string m_name;
	int m_hp;
	int m_atk;
	int m_def;
public:
	//Datamon(std::string name, int hp, int atk, int def);
	virtual void CreateDatamon();
	~Datamon();
};

