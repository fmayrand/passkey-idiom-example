#include "stdafx.h"
#include "Spy.h"
#include "Citizen.h"
#include "Passkey.h"

Spy::Spy()
{
   // Test access to citizen info.
   Citizen citizen;
   printCitizenInfo(citizen);
}

void Spy::printCitizenInfo(const Citizen &citizen) const
{
   cout << endl << "*-----------------------------" << endl;
   cout << "* Spy output:" << endl << endl;
   cout << "Citizen Name: " << citizen.getName() << endl;
   //cout << "Citizen SSN: " << citizen.getSocialSecurityNumber(Passkey<Government>()) << endl; // COMPILE ERROR
   //cout << "Citizen Favourite Food: " << citizen.getFavoriteFood(Passkey<Omniscient>()) << endl; // COMPILE ERROR
}
