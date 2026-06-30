#pragma once
#include "Datamon.h"

class DatamonVirus : public Datamon
{
public:
	DatamonVirus(std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
};