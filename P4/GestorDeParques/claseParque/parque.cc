#include "parque.h"
#include "../claseSendero/sendero.h"
#include "../claseRuta/ruta.h"
#include "../systemFunctions/systemFunctions.h"

bool Parque::setParkID(int const &parkID)
{
   if(existPark(parkID))
   {
      return false;
   }
   parkID_ = parkID;
   return true;
}