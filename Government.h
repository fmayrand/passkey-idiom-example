#pragma once

class Citizen;

class Government
{
   public:
      Government();

   private:
      void printCitizenInfo(const Citizen &citizen) const;
};
