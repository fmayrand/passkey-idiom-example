#pragma once

class Citizen;

class Omniscient
{
   public:
      Omniscient();

   private:
      void printCitizenInfo(const Citizen &citizen) const;
};
