#pragma once
#include "Datamon.h"
class DatamonBios : public Datamon
{
public :
	DatamonBios(std::string name, const unsigned char maxHP, const unsigned char atk, const unsigned char def);
};

