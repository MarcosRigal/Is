#include "../GestorDeParques/systemFunctions/systemFunctions.h"

int main()
{
   intro();
   string dni = login();
   
   switch (whoIs(dni))
   {
   case 0:
      /* Administrativo */
      break;
   
   case 1:
      /* Monitor */
      break;

   default:
      /* No existe */
      break;
   }

   return 0;
}
