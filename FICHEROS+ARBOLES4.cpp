#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptfichero;
    char fin[] = "fin";
    char frase[60];

    ptfichero = fopen("registroDeUsuario.txt", "wt");
    printf(" PROGRAMA para ESCRIBIR FRASES.\nCuando quiera salir, escriba la palabra fin.\n\n");

    do {
        puts("\nEscriba una FRASE:\n(o fin). \n");
        gets(frase);
        if (strcmp(frase, fin) == 0) {
            break;
        }
        fprintf(ptfichero, "%s\n", frase);
    } while (strcmp(frase, fin) != 0);

    fclose(ptfichero);
    return 0;
}
