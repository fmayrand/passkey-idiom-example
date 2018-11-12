#include "stdafx.h"
#include "Government.h"
#include "Citizen.h"
#include "Passkey.h"

Government::Government()
{
   // Test access to citizen info.
   Citizen citizen;
   printCitizenInfo(citizen);
}

void Government::printCitizenInfo(const Citizen &citizen) const
{
   cout << endl << "*-----------------------------" << endl;
   cout << "* Government output:" << endl << endl;
   cout << "Citizen Name: " << citizen.getName() << endl;
   cout << "Citizen SSN: " << citizen.getSocialSecurityNumber(Passkey<Government>()) << endl; // THIS COMPILES
}
