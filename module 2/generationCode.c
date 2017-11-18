#include <stdio.h>
#include <stdlib.h>

#include "generationCode.h"

FILE* openFile()
{
    /**
     * Open the Param.h file that will be used by Arduino / ouvrir le param.h fichier qui vas etre utiliser par l'arduino 
     * We locate the file and if it does not exist we / on localise le fichier et s'il n'éxiste pas on le crée avec la fonction w+
     * create it with a w +
     * We check that the file is open before any changes / on vérifie si le fichier est bien ouvert avant qu'on fasse des changements 
     */

    // Creation pointer to file/création du pointeur vers le fichier 
    FILE* content = NULL;
    content = fopen("param.h", "w+");

    // Verify file is open / vérifier s'il est bien ouvert 
    if(content == NULL)
    {
        printf("ERROR : content should be contain param.h\n");
        exit(1);
    }

    return content;

}

void writeParam(FILE* content, Order* element)
{
    /**
     * We write inside the file Param.h with fonction  fprintf / on ecrit dans le fichier param.h a l'aide du fonction fprintf
     * fprintf allow us to directly write character formatted / fprintf nous permet d'écrire des  charactères et des chaine aussi dans le fichier  
     * strings inside the file
     * We write the various instructions and maccros inside / on écrit les différents prototypes dans les fichier param.h pour permettre a l'arduino de fonctionner correctement 
     * the file Param.h to allow the Arduino to work
     */

    fprintf(content,"#ifndef PARAM_H_INCLUDED\n");
    fprintf(content,"#define PARAM_H_INCLUDED\n\n");
    fprintf(content,"int const delai=50;\n\n");
    fprintf(content,"int const debut=%d;\n", element->beginning);
    fprintf(content,"int const fin=%d;\n\n", element->finish);
    fprintf(content,"#endif // PARAM_H_INCLUDED");
}
