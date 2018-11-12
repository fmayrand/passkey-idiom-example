#include "stdafx.h"
#include "Omniscient.h"
#include "Citizen.h"
#include "Passkey.h"

Omniscient::Omniscient()
{
   // Test access to citizen info.
   Citizen citizen;
   printCitizenInfo(citizen);
}

void Omniscient::printCitizenInfo(const Citizen &citizen) const
{
   cout << endl << "*-----------------------------" << endl;
   cout << "* Omniscient output:" << endl << endl;
   cout << "Citizen Name: " << citizen.getName() << endl;
   cout << "Citizen SSN: " << citizen.getSocialSecurityNumber(Passkey<Omniscient>()) << endl;
   cout << "Citizen Favourite Food: " << citizen.getFavouriteFood(Passkey<Omniscient>()) << endl;
}
