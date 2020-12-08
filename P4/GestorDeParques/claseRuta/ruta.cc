#include "ruta.h"
#include "../claseSenderista/senderista.h"
#include "../claseSendero/sendero.h"

list<Sendero*> Ruta::getTraversedTrail() const 
{
   return traversedTrail_;
}

list<Senderista*> Ruta::getExcursionistRegistered() const 
{
   return excursionistRegistered_;
}

list<Incidence> Ruta::getIncidences() const 
{
   return incidences_;
}