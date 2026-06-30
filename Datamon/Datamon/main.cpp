// Datamon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "main.h"
#include <iostream>
#include <vector>
#include <string>

#include "Ability.h"

#include "Datamon.h"
#include "DatamonBios.h"
#include "DatamonOverclock.h"
#include "DatamonPowershell.h"
#include "DatamonVirus.h"

using namespace std;

vector<Datamon*> g_datadex;

DatamonBios* biosMon = new DatamonBios("Pikachu", 300, 30, 10);

int main()
{
    
    while (true) {
        //Menu choice
        cout << "Hi, welcome to Datamon !" << endl
            << "> Press C to create a Datamon." << endl
            << "> Press F to start a fight between two Datamons." << endl
			<< "> Press D to show all existing Datamons." << endl
            << "> Press E to exit Datamon" << endl;

        string userEntry = GetUserStringEntry();

        switch (toupper(userEntry[0])) {
            case 'C': {                
                CreateDatamon();
                break;
            }
            case'F': {   
                if (g_datadex.size() >= 2) {
                    //launch "StartBattle();"
                }
                else {
                    cout << "You need at least 2 Datamons to start a fight. Create them by pressing 'C' in the main menu !" << endl;
                    CleanCLS();
                }
                break;
            }
            case 'E': {
                return 0;
            }
			case 'D': {
				if (!g_datadex.empty()) {
					ShowDatadex();
				}
				else {
					cout << "Datadex empty." << endl;
				}
				CleanCLS();
				break;
			}
            default: {
                cout << "Unexpected input, try again" << endl;  
                CleanCLS();
                break;
            }
        };
    }
}

void CreateDatamon()
{
    system("cls");

    //Var init
    int datamonPoints = 100;
    string datamonName = "";
    string datamonType = "";
    int datamonATK = 0;
    int datamonDEF = 0;
    int datamonHP = 0;

    //Get datamon informations
    cout << "Give it a name !" << endl << endl;
    datamonName = GetUserStringEntry();

    cout << "Give it a type (Virus / Overclock / BIOS / Powershell)" << endl << endl;
    datamonType = GetUserStringEntry();

    cout << "You have " << datamonPoints << " pts to give to your Datamon across his attack(ATK), defense(DEF) and health(HP)." << endl
        << "Note that a point in health give 5HP, while 1 point in attack/defense gives 1 ATK/DEF" << endl
        << "How much do you want to spend in ATK ?" << endl << endl;
    datamonATK = stoi(GetUserStringEntry());
    datamonPoints -= datamonATK;

    cout << datamonPoints << " remaining. How much do you want to spend in defense ?" << endl << endl;
    datamonDEF = stoi(GetUserStringEntry());
    datamonPoints -= datamonDEF;
    
    cout << "This makes " << datamonPoints << " points into his health." << endl; 
    datamonHP = 5*datamonPoints; //TODOMatt : Securiser que la stats de point ne soit pas n�gative si le joueur essaye de se distribu� plus de 100 pts en ATK et DEF

    //Datamon summary
    cout << datamonName << ", a " << datamonType << " type Datamon, with "
        << datamonATK << "ATK points, "
        << datamonDEF << "DEF points and "
        << datamonHP << "HP, has been created" << endl << endl;

    //Datamon creation and addition to Datadex
    //Datamon CreatedDatamon = DatamonBIOS::CreateDatamon();

	// Transforming the type name to uppercase
	for (int i = 0; i < datamonType.size(); i++) {
		datamonType[i] = toupper(datamonType[i]);
	}

	// TODO: Format the output (cout) so it makes sense; rn it still prints if the datamon wasnt actually created
	// IMPORTANT!!!!!   :   REMOVE THE / 5  FROM THE CTOR, IT'S TEMPORARY BECAUSE OF THE WAY THE DATAMONS ARE ORIGINALLY COUT


	if (datamonType == "BIOS") {
		g_datadex.push_back(new DatamonBios(datamonName, datamonHP / 5, datamonATK, datamonDEF));
	}
	else if (datamonType == "OVERCLOCK") {
		g_datadex.push_back(new DatamonOverclock(datamonName, datamonHP / 5, datamonATK, datamonDEF));
	}
	else if (datamonType == "OVERCLOCKED") {
		g_datadex.push_back(new DatamonOverclock(datamonName, datamonHP / 5, datamonATK, datamonDEF));
	}
	else if (datamonType == "VIRUS") {
		g_datadex.push_back(new DatamonVirus(datamonName, datamonHP / 5, datamonATK, datamonDEF));
	}
	else {
		cout << endl << endl << "INVALID DATAMON" << endl << endl;
	}

    CleanCLS();
};

void ShowDatadex() {
	system("cls");

	for (Datamon* datamon : g_datadex) {
		cout << datamon->GetName() << " - ";
		cout << datamon->GetTypeString() << " - ";
		cout << (int)datamon->GetATK() << " ATK - ";
		cout << (int)datamon->GetDEF() << " DEF - ";
		cout << (int)datamon->GetHPStat() * 5 << " HP";
	}
	cout << endl;
}

string GetUserStringEntry()
{
    string userEntry;
    getline(cin, userEntry);
    cout << endl;
    return userEntry;
}

void CleanCLS() //Ask for any key to be pressed, then clean the console
{
    system("pause");
    system("cls");
}
