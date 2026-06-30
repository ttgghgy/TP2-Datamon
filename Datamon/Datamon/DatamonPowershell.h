#pragma once
#include "Datamon.h"
class DatamonPowershell : public Datamon
{
public:
	DatamonPowershell(std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
};

