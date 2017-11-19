#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "menu.h"
#include <windows.h>
void Color(int couleurDuTexte,int couleurDeFond);

void displayMenu(int* menu)
{
    /**
     * We display the different possible choices / on affiche les different choix possible des leds 
     * of leds and we ask the user his choice / on on demande a l'utilisateur de faire un choix 
     * Change the menu variable with a pointer 
     */
     printf("                ___     ____     _______    ____     mp\n      |---''''''   |   dMMMMb   `""""""YM<.  `'\n      |            |  MMF  YMM  ]M[       dM'    ]M  Ob\n      |...,---+    | ,MM    `   ]M[       dm      '  dO\n               |   | ]MM        ]M______  `Mb___     dO\n   |ii'|       |   | ]MM     _   M'''''''   `""PPPPYM. dO\n   |OOp|       |   | `MM.   dMb  Mb               Mb dO\n   |OOP|       |   |  MM[   dMb  Mb        mm     dM dO\n   |dOo|       |.,--  YMMmmdMM'  mmmmmmm   YML__,dM' dO\n   |dOP|               ``""""''  _`""""""    `""""'   `'\n   |YP8|+===iiii'            ,-'''`. .    ,  m  ,-.p.\n    ''' `888888'|           |' _ _ |  `. /   M   '  ||\n        `'------'           |.'''''    ,'.   M  .,..'|\n                             \_____/  ,'  `b  M  |L   |\n                               `""-''  '    ' ""  ""``''-\n""");
sleep(2);  
printf(",ISLAM,\n        ,AMMMMP~~~~\n     ,MMMMMMMMA.\n   ,M;'     `YV'\n  AM' ,OMA,\n AM|   `~VMM,.      .,ama,____,amma,..\n MML      )MMMD   .AMMMMMMMMMMMMMMMMMMD.\n VMMM    .AMMY'  ,AMMMMMMMMMMMMMMMMMMMMD\n `VMM, AMMMV'  ,AMMMMMMMMMMMMMMMMMMMMMMM,                ,\n  VMMMmMMV'  ,AMY~~''  'MMMMMMMMMMMM' '~~             ,aMM\n  `YMMMM'   AMM'        `VMMMMMMMMP'_              A,aMMMM\n   AMMM'    VMMA. YVmmmMMMMMMMMMMML MmmmY          MMMMMMM\n  ,AMMA   _,HMMMMmdMMMMMMMMMMMMMMMML`VMV'         ,MMMMMMM\n  AMMMA _'MMMMMMMMMMMMMMMMMMMMMMMMMMA `'          MMMMMMMM\n ,AMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMa      ,,,   `MMMMMMM\n AMMMMMMMMM'~`YMMMMMMMMMMMMMMMMMMMMMMA    ,AMMV    MMMMMMM\n VMV MMMMMV   `YMMMMMMMMMMMMMMMMMMMMMY   `VMMY'  adMMMMMMM\n `V  MMMM'      `YMMMMMMMV.~~~~~~~~~,aado,`V''   MMMMMMMMM\n    aMMMMmv       `YMMMMMMMm,    ,/AMMMMMA,      YMMMMMMMM\n    VMMMMM,,v       YMMMMMMMMMo oMMMMMMMMM'    a, YMMMMMMM\n    `YMMMMMY'       `YMMMMMMMY' `YMMMMMMMY     MMmMMMMMMMM\n     AMMMMM  ,        ~~~~~,aooooa,~~~~~~      MMMMMMMMMMM\n       YMMMb,d'         dMMMMMMMMMMMMMD,   a,, AMMMMMMMMMM\n        YMMMMM, A       YMMMMMMMMMMMMMY   ,MMMMMMMMMMMMMMM\n       AMMMMMMMMM        `~~~~'  `~~~~'   AMMMMMMMMMMMMMMM\n       `VMMMMMM'  ,A,                  ,,AMMMMMMMMMMMMMMMM\n     ,AMMMMMMMMMMMMMMA,       ,aAMMMMMMMMMMMMMMMMMMMMMMMMM\n   ,AMMMMMMMMMMMMMMMMMMA,    AMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n ,AMMMMMMMMMMMMMMMMMMMMMA   AMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nAMMMMMMMMMMMMMMMMMMMMMMMMAaAMMMMMMMMM KING OF BEASTS ISLAM\n                             __       __");
system ("COLOR 2  ");
sleep(2);
    printf("\n|================== MENU ==================|\n");
    printf("  \n Allumage de LED basique : \n\t");
    printf("1. 1 led sur 2\n\t");
    printf("2. 1 led sur 3\n\t");
    printf("3. 1 led sur 4\n\t");
    printf("4. 1 led sur 5\n\t");
    printf("5. 1 led sur 6\n\t");
    printf("6. 1 led sur 7\n\t");
    printf("7. 1 led sur 8\n\t");
    printf("8. 1 led sur 9\n\t");
    printf("9. 1 led sur 10\n\t");
    printf("10. Clignotement de leds\n\t");
    printf("11. Allumage des leds une par une\n\t");
    printf("12. Mode chenille (allumage des leds une par une)dans les deux sens\n\t");
    printf("13. Allumer toutes les leds\n\n");

    printf("Faites votre choix :");
    scanf("%d", menu);
}

void menuChoice(int* menu, FILE* content)
{
    /**
     * We use a switch to initialize all possible choices/ on utilise " switch case " pour inisialiser toutes les possibilitées 
     * Display some information as well as changes of variables / afficher quelques information en fonction des variables accordé au choix 
     * according to the choice of the user
     * End of the Arduino program/ fin du programme arduino 
     */
    Order element;

    switch(*menu)
    {
        case 1:
            printf("Vous avez fait le choix 1 led sur 2\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 2;
            element.finish = 4;
            break;
        case 2:
            printf("Vous avez fait le choix 1 led sur 3\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 4;
            element.finish = 7;
            break;
        case 3:
            printf("Vous avez fait le choix 1 led sur 4\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 7;
            element.finish = 11;
            break;
        case 4:
            printf("Vous avez fait le choix 1 led sur 5\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 11;
            element.finish = 12;
            break;
        case 5:
            printf("Vous avez fait le choix 1 led sur 6\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 12;
            element.finish = 13;
            break;
        case 6:
            printf("Vous avez fait le choix 1 led sur 7\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 12;
            element.finish = 13;
            break;
        case 7:
            printf("Vous avez fait le choix 1 led sur 8\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 14;
            element.finish = 15;
            break;
        case 8:
            printf("Vous avez fait le choix 1 led sur 9\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 14;
            element.finish = 16;
            break;
        case 9:
            printf("Vous avez fait le choix 1 led sur 10\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 28;
            element.finish = 38;
            break;
        case 10:
            printf("Vous avez fait le choix clignotement de leds\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 0;
            element.finish = 2;
            break;
        case 11:
            printf("Vous avez fait le choix allumage de leds une par une\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 28;
            element.finish = 38;
            break;
        case 12:
            printf("Vous avez fait le choix du mode chenille\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 17;
            element.finish = 38;
            break;
        case 13:
            printf("Vous avez fait le choix d'allumer toutes les leds\n");
            printf("Creation de votre fichier param.h\n");

            element.beginning = 0;
            element.finish = 1;
            break;
    }

    writeParam(content, &element);
    fclose(content);
}
