#include "stdafx.h"
#include "Citizen.h"

Citizen::Citizen()
   : m_name("X")
   , m_socialSecurityNumber("123456")
   , m_favouriteFood("Thai")
{
}

string Citizen::getName() const
{
   return m_name;
}

string Citizen::getSocialSecurityNumber(Passkey<Government>) const
{
   return getSocialSecurityNumber();
}

string Citizen::getSocialSecurityNumber(Passkey<Omniscient>) const
{
   return getSocialSecurityNumber();
}

string Citizen::getSocialSecurityNumber() const
{
   return m_socialSecurityNumber;
}

string Citizen::getFavouriteFood(Passkey<Omniscient>) const
{
   return getFavouriteFood();
}

string Citizen::getFavouriteFood() const
{
   return m_favouriteFood;
}
