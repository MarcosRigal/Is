#include "senderista.h"
#include "../claseRuta/ruta.h"

bool Senderista::setParticipatesOnRoute(list<Ruta*> const &participatesOnRute)
{
   if(participatesOnRute.empty())
   {
      return false;
   }
   participatesOnRoute_=participatesOnRute; 
   return true;   
}

list<Ruta*> Senderista::getParticipatesOnRoute() const
{
   return participatesOnRoute_;
}