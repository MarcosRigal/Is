#include "../GestorDeParques/systemFunctions/systemFunctions.h"

int main()
{
   intro();
   int select = 0;
   string dni = login();
   
   switch (whoIs(dni))
   {
   case 0:
      do
      {
         select=menuAdministrativo();
         switch (select)
         {
         case 1:
            /* code */
            break;

         case 2:
            /* code */
            break;

         case 3:
            /* code */
            break;

         default:
            break;
         }
      }while (select!=0);
      exit(0);
      break;
   
   case 1:
      do
      {
         select=menuAdministrativo();
         switch (select)
         {
         case 1:
            /* code */
            break;

         case 2:
            /* code */
            break;

         case 3:
            /* code */
            break;

         default:
            break;
         }
      }while (select!=0);
      exit(-1);
      break;

   default:
         errorUserNotFound();
      break;
   }

   return 0;
}
