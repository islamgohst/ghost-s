#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

void remptab (structure tab[], int *n)
{
//Cr�er une structure contenant un membre de donn�es pour chaque domaine 
   char buffer[1024] ; //cr�er une zone tampon de caract�re pour contenir une la ligne de l' image � la fois 
   char *record,*line;
   int x,i=0; 
   
   FILE *fstream = fopen("test.csv","r"); //ouverture du fichier en mode lecture 
   if(fstream == NULL)
   {
      printf("\n ouverture fichier echouer :/");
   }
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL) //repeter les action tant que le fichier n'a pas etais terminer 
   {
     record = strtok(line,";"); //analyser le CSV � l'aide la fonction " strtok "
     while(record != NULL) 
     {  x=atoi(record);  //lire la donnee du fichier 
        record = strtok(NULL,";");
        tab[i].frequencecard = atoi(record) ;  // convertir les donn�es contenues dans � tok � en entier et on affecte au tableau les valuers du fichier 
        record = strtok(NULL,";"); // pour les lectures suivantes sur la m�me ligne,
        
     }
     ++i ;
     *n=*n+1; // incrementer la taille du tableau 
     

   }
  
   fclose(fstream); // fermer le fichier 
   fstream = fopen("test.csv","r"); //ouvrir le fichier une deuxiemme fois
   printf("\n\n\n");
     i=0; // reinitialisee le compteur a 0 
     // on refait une deuxieme licture du fichier 
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   { 
     record = strtok(line,";");
     while(record != NULL)
     { 
       tab[i].temps = atoi(record) ; 
       record = strtok(NULL,";");
        x=atoi(record);
        record = strtok(NULL,";"); 
     }
     i++;
     

   }
   
}
