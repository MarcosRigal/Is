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

         case 4:
            /* code */
            break;

         case 5:
            /* code */
            break;

         case 6:
            /* code */
            break;

         default:
            shutDown();
            break;
         }
      }while (select!=0);
      exit(0);
      break;
   
   case 1:
      do
      {
         select=menuMonitor();
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
            shutDown();
            break;
         }
      }while (select!=0);
      exit(0);
      break;

   default:
         errorUserNotFound();
      break;
   }

   return 0;
}
