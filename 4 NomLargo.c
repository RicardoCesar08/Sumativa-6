#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Elaborar una aplicación de línea de comandos en C que lea los nombres de 5 personas por teclado y que determine
cuál de esas tiene el nombre más corto.*/

int main(){

    char nom1[25];
    char nom2[25];
    char nom3[25];
    char nom4[25];
    char nom5[25];

    char shortName[25];

    int numLetras = 26;

    printf(" Escriba el primer nombre: ");
    scanf("%s", nom1);

    printf(" Escriba el segundo nombre: ");
    scanf("%s", nom2);

    printf(" Escriba el tercer nombre: ");
    scanf("%s", nom3);

    printf(" Escriba el cuarto nombre: ");
    scanf("%s", nom4);

    printf(" Escriba el quinto nombre: ");
    scanf("%s", nom5);

    if(strlen(nom1)<numLetras){
        numLetras = strlen(nom1);
        strcpy(shortName, nom1);
    }else if(strlen(nom2)<numLetras){
        numLetras = strlen(nom2);
        strcpy(shortName, nom2);
    }else if(strlen(nom3)<numLetras){
        numLetras = strlen(nom3);
        strcpy(shortName, nom3);
    }else if(strlen(nom4)<numLetras){
        numLetras = strlen(nom4);
        strcpy(shortName, nom4);
    }else if(strlen(nom5)<numLetras){
        numLetras = strlen(nom5);
        strcpy(shortName, nom5);
    }

    printf("\n\t Nombre mas corto: %s \n\t Con un total de %d letras.", shortName, numLetras);

    return 0;
}
