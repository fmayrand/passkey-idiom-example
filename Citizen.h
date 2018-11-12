#pragma once

#include "Passkey.h"

using namespace std;

class Government;
class Omniscient;

class Citizen
{
   public:
      Citizen();

      string getName() const;
      string getSocialSecurityNumber(Passkey<Government>) const;
      string getSocialSecurityNumber(Passkey<Omniscient>) const;
      string getFavouriteFood(Passkey<Omniscient>) const;

   private:
      string getSocialSecurityNumber() const;
      string getFavouriteFood() const;

      string m_name;
      string m_favouriteFood;
      string m_socialSecurityNumber;
};
