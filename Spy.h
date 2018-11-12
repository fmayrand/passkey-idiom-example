#pragma once

class Citizen;

class Spy
{
   public:
      Spy();

   private:
      void printCitizenInfo(const Citizen &citizen) const;
};
