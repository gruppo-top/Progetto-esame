#include <stdio.h>
#include <stdlib.h>

//variabili
 int articolo;
 int tshirt, pantaloni, scarpe;
 int colore;
 int taglia;
 int carrello;

int main()
{
                    //catalogo articoli
                    do
                    {
                     printf("*---------------------------------------*\n");
                     printf("|               CATALOGO                |\n");
                     printf("*---------------------------------------*\n");
                     printf("|  1. T-shirt                           |\n");
                     printf("|  2. Pantaloni                         |\n");
                     printf("|  3. Scarpe                            |\n");
                     printf("|  0. Esci                              |\n");
                     printf("*---------------------------------------*\n");
                    printf("Seleziona articolo:\n");
                     scanf("%d", &articolo);
                    //{do
                    switch(articolo)
{ //T-SHIRT
case 1:
    printf("Hai selezionato T-shirt\n");
    //COLORE T-SHIRT
    printf("Seleziona il colore:\n");
    do{
        printf("11. Rosso\n");
        printf("12. Giallo\n");
        printf("13. Nero\n");
        printf("14. Bianco\n");
        scanf("%d", &colore);

     if (colore == 11)
     {
         printf("Hai selezionato il colore rosso\n");
     }
     else if (colore == 12)
     {
         printf("Hai selezionato il colore giallo\n");
     }
     else if (colore == 13)
     {
         printf("Hai selezionato il colore nero\n");
     }
     else if (colore == 14)
     {
          printf("Hai selezionato il colore bianco\n");
     }
     //TAGLIA T-SHIRT
      printf("Seleziona la taglia:\n");
    do{
        printf("111. S\n");
        printf("112. M\n");
        printf("113. L\n");
        scanf("%d", &taglia);

     if (taglia == 111)
     {
         printf("Hai selezionato la taglia S\n");
     }
     else if (taglia == 112)
     {
         printf("Hai selezionato la taglia M\n");
     }
     else if (taglia == 113)
     {
         printf("Hai selezionato la taglia L\n");
     }

    break;

//PANTALONI
case 2:
    printf("Hai selezionato Pantaloni\n");
    //COLORE PANTALONI
    printf("Seleziona il colore:\n");
    do{
        printf("21. Rosso\n");
        printf("22. Giallo\n");
        printf("23. Nero\n");
        printf("24. Bianco\n");
        scanf("%d", &colore);

     if (colore == 21)
     {
         printf("Hai selezionato il colore rosso\n");
     }
     else if (colore == 22)
     {
         printf("Hai selezionato il colore giallo\n");
     }
     else if (colore == 23)
     {
         printf("Hai selezionato il colore nero\n");
     }
     else if (colore == 24)
     {
          printf("Hai selezionato il colore bianco\n");
     }
     //TAGLIA PANTALONE
      printf("Seleziona la taglia:\n");
     do{
        printf("211. S\n");
        printf("212. M\n");
        printf("213. L\n");
        scanf("%d", &taglia);

     if (taglia == 211)
     {
         printf("Hai selezionato la taglia S\n");
     }
     else if (taglia == 212)
     {
         printf("Hai selezionato la taglia M\n");
     }
     else if (taglia == 213)
     {
         printf("Hai selezionato la taglia L\n");
     }
     break;
//SCARPE
case 3:
    printf("Hai selezionato scarpe\n");
    //COLORE SCARPE
    printf("Seleziona il colore:\n");
    do{
        printf("31. Rosso\n");
        printf("32. Giallo\n");
        printf("33. Nero\n");
        printf("34. Bianco\n");
        scanf("%d", &colore);

     if (colore == 31)
     {
         printf("Hai selezionato il colore rosso\n");
     }
     else if (colore == 32)
     {
         printf("Hai selezionato il colore giallo\n");
     }
     else if (colore == 33)
     {
         printf("Hai selezionato il colore nero\n");
     }
     else if (colore == 34)
     {
          printf("Hai selezionato il colore bianco\n");
     }
     //TAGLIA SCARPE
      printf("Seleziona la taglia:\n");
     do{
        printf("311. S\n");
        printf("312. M\n");
        printf("313. L\n");
        scanf("%d", &taglia);

     if (taglia == 311)
     {
         printf("Hai selezionato la taglia S\n");
     }
     else if (taglia == 312)
     {
         printf("Hai selezionato la taglia M\n");
     }
     else if (taglia == 313)
     {
         printf("Hai selezionato la taglia L\n");
     }
     break;
//ESCI
case 0: printf("Fine sessione.\n");
    break;
//SELEZIONE DI UN CODICE NON PRESENTE NEL CATALOGO
default: printf("Scelta non consentita.\n");
    break;
//chiusura delle funzioni do while
    }while(taglia!=0); //settimo do (PER LA TAGLIA DELLE SCARPE)
    break;
    }while(colore!=0); //sesto do (PER IL COLORE DELLE SCARPE)
    break;
    }while(taglia!=0); //quinto do (PER LA TAGLIA DEL PANTALONE)
    break;
    }while(colore!=0); //quarto do (PER IL COLORE DEL PANTALONE)
    break;
    }while(taglia!=0); //terzo do (PER LA TAGLIA DELLA MAGLIETTA)
    break;
    }while(colore!=0); //secondo do (PER LA TAGLIA DELLA MAGLIETTA)
    break;
    }// PARENTESI FINALE DELLA FUNZIONE SWITCH
    break;
    }while(articolo!=0); //primo do (CATALOGO)

 //CARRELLO  
if (articolo == 1)
{
        printf("Totale carrello: 50 euro");

}else if (articolo == 2)
{
    printf("Totale carrello: 120 euro");
}
else if (articolo == 3)
{
    printf("Totale carrello 280 euro" );
}
//FINE PROGRAMMA
return 0;
}
