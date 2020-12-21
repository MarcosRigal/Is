#include "../GestorDeParques/systemFunctions/systemFunctions.h"
#include "../GestorDeParques/claseParque/parque.h"

int main()
{
   intro();
   int select = 0, subSelect = 0;
   string dni = login();
   list<Parque*> &listOfParks;
   
   switch (whoIs(dni))
   {
   case 0:
      do
      {
         select=menuAdministrativo();
         switch (select)
         {
         case 1:
            do
            {
               subSelect = menuParques();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
            break;

         case 2:
            do
            {
               subSelect = menuSenderos();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
            break;

         case 3:
            do
            {
               subSelect = menuRutas();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
            break;

         case 4:
            do
            {
               subSelect = menuSenderistas();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
            break;

         case 5:
            do
            {
               subSelect = menuTrabajadores();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
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
            do
            {
               subSelect = menuRutas();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
            break;

         case 2:
            do
            {
               subSelect = menuIncidencias();
               switch (subSelect)
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

               default:
                  break;
               }
            } while (subSelect!=0);
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
