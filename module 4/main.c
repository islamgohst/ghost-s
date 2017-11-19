#include <stdio.h>
#include <stdlib.h>
#include "menu.h" //faire appel au fichier menu.h
#include "donnees.h" //faire appel au fichier donnees.h
#include "actions.h" //faire appel au fichier actions.h


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	structure tab [10]; //declaration d'un tableau de structure 
	int n=0,i,choix1,rep;
	afficherdebut();
	remptab (tab, &n);// remplissage du tableau  a partir du fichier csv 
	do
	{
	
      choix1=affichermenu(); //faire appel a la fonction afficher menu 
      choixmenu (choix1,  tab, n ); // executer le choix du menu
      
      printf("\t\t\t\n\nVoulez-vous faire d'autre traitement ?");
    
     
             printf("\n*********\n 1.. OUI \n 2.. NON\n*********\n\t :");
               scanf("%d",&rep);
       
       
    system ("cls");
	}while(rep == 1);
	system("PAUSE");
	return 0;
}
