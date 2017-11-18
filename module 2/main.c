#include <stdio.h>
#include <stdlib.h>

#include "menu.h"
#include "generationCode.h"

int main(int argc, char *argv[])
{
    // Creation pointer to file/ création du pointeur vers le fichier 
    FILE* content = NULL;
    content = openFile();

    // Display menu/ affichage du menu 
    int menu;
    displayMenu(&menu);

    // Contain element to write param/ contien les éléments qui nous permet d'écrire dans le fichier 
    menuChoice(&menu, content);

    return 0;
}
