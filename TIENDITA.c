#include <stdio.h>
#include <stdlib.h>
int a; 
int b;
int c;
int prod1;
int gan;
int gan2;
int gan3;
int gan4;
int gan5;
int var1;
int prod2;
int prod3;
int prod4;
int prod5;
int CHOCOLATE;
int COCACOLA;
int BUBULUBU;
int TAKIS;
int GALLETAS;
int main ()
{
    printf("1 COMPRAR.\n 2 VER GANANCIAS.\n");
    scanf("%d",& a);
    if (a==1){
    printf (" 1 CHOCOLATE $5\n 2 COCA COLA $10\n 3 BUBULUBU $7\n 4 TAKIS $9\n 5 GALLETAS $8\n");
    scanf("%d", &b);
    switch (b)
    {
             case 1: {
                 printf ("COLOQUE LOS PRODUCTOS QUE DESEA\n");
                 scanf("%d",&prod1);
                 CHOCOLATE = 5 * prod1;
                 printf("EL TOTAL ES : %d\n",CHOCOLATE);
                 printf("¿QUIERE VER SUS GANANCIAS?\n PRESIONE 1\n PRESIONE 2 PARA SALIR\n");
                 scanf("%d", &gan);
                 if (gan == 1)
                 printf ("SU TOTAL ES DE %d\n",500 + CHOCOLATE);
                 break;
                   } 
           case 2 :{ 
                printf ("COLOQUE LOS PRODUCTOS QUE DESEA\n");
                scanf("%d", & prod2);
                COCACOLA=10*prod2;
                printf ("EL TOTAL ES : %d\n",COCACOLA);
                printf("¿QUIERE VER SUS GANANCIAS?\n PRESIONE 1\n PRESIONE 2 PARA SALIR\n");
                scanf("%d", &gan2);
                if (gan2 == 1)
                printf ("EL TOTAL ES %d\n",500 + COCACOLA);
                break;
                }
           case 3 :{ 
                printf ("COLOQUE LOS PRODUCTOS QUE DESEA\n");
                scanf("%d",&prod3);
                BUBULUBU=7*prod3;
                printf("EL TOTAL ES : %d\n", BUBULUBU);
                printf("¿QUIERE VER SUS GANANCIAS?\n PRESIONE 1\n PRESIONE 2 PARA SALIR\n");
                scanf("%d", &gan3);
                if (gan3 == 1)
                printf ("EL TOTAL ES %d\n",500 + BUBULUBU);
                break;
                }
            case 4 :{ 
                printf ("COLOQUE LOS PRODUCTOS QUE DESEA\n");
                scanf("%d",&prod4);
                TAKIS=9*prod4;
                printf ("El total es : %d\n", TAKIS);
                printf("¿QUIERE VER SUS GANANCIAS?\n PRESIONE 1\n PRESIONE 2 PARA SALIR\n");
                scanf("%d", &gan4);
                if (gan4 == 1)
                printf ("El total es %d\n",500 + TAKIS);
                break;
                }
            case 5 :{ 
                printf ("COLOQUE LOS PRODUCTOS QUE DESEA\n");
                scanf("%d",&prod5);
                GALLETAS=8*prod5;
                printf ("EL TOTAL ES : %d\n", GALLETAS);
                printf("¿QUIERE VER SUS GANANCIAS?\n PRESIONE 1\n PRESIONE 2 PARA SALIR\n");
                scanf("%d", &gan5);
                if (gan5 == 1)
                printf ("El total es %d\n",500 + GALLETAS);
                break;
                }
                default: printf ("ERROR AL ESCRIBIR\n");
}
}
if (a == 2)
     {
      printf("SUS GANANCIAS SON DE $500\n");
      }
      else
      {
      if (a >= 3)
          {
             printf("ERROR AL ESCRIBIR\n");
             }
             }      
system ("PAUSE");
}
