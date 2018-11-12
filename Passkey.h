#pragma once

template <typename T>
class Passkey
{
   private:
      friend T;
      Passkey() {}
      Passkey(const Passkey&) {}
      Passkey& operator=(const Passkey&) = delete;
};
