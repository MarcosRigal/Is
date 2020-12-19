#include "parque.h"
#include "../systemFunctions/systemFunctions.h"

bool Parque::setParkID(int parkID, list<Parque*> &listOfParks)
{
   if(existPark(parkID, listOfParks))
   {
      return false;
   }
   parkID_ = parkID;
   return true;
}