#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "menu.c"
#include "estructuras.h"
#include "estructuras.c"

int main() {
    int opcion, totalUsuarios=0;
    Usuario usuarios[MAX_USERS];
    Usuario *u;

    printf("\nBienvenido a CashCove ");
    printf("\nIngrese el numero de la opcion deseada: ");
    do {
        opcion = desplegarMenu("\n\n1)Registarse\n2)Ingresar\n3)Salir\nOpcion: ",3);
        switch (opcion){
            case 1: //Registrar usuario
                u = crearUsuario();
                usuarios[totalUsuarios] = *u;
                totalUsuarios++;
                break;
            case 2: //Autorizar usuario
                u = crearUsuario();
                if(validarUsuario(usuarios, *u, totalUsuarios)) {
                    printf("\nBienvenido :D");
                } else {
                    printf("\nEl usuario no esta registrado :(");
                }
                break;
            case 3://Salir
                printf("\nSaliendo...");
                break;
        }
    } while (opcion != 3);

    return 0;
}   