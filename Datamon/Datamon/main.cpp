// Datamon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "main.h"
#include "DatamonBios.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Datamon*> g_datadex;

int main()
{
   
    

    while (true) {
        //Menu choice
        cout << "Hi, welcome to Datamon !" << endl
            << "> Press C to create a Datamon." << endl
            << "> Press F to start a fight between two Datamons." << endl
            << "> Press E to exit Datamon" << endl;

        string userEntry = GetUserStringEntry();

        switch (userEntry[0]) {
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

    cout << "Give it a type" << endl << endl;
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
    datamonHP = 5*datamonPoints; //TODOMatt : Securiser que la stats de point ne soit pas négative si le joueur essaye de se distribué plus de 100 pts en ATK et DEF

    //Datamon summary
    cout << datamonName << ", a " << datamonType << " type Datamon, with "
        << datamonATK << "ATK points, "
        << datamonDEF << "DEF points and "
        << datamonHP << "HP, has been created" << endl << endl;

    //Datamon creation and addition to Datadex
    //Datamon CreatedDatamon = DatamonBIOS::CreateDatamon();

    CleanCLS();
};

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
