#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estructuras.h"

Usuario *crearUsuario() {
    Usuario *nuevoUsuario;
    nuevoUsuario = (Usuario *)malloc(sizeof(Usuario));
    nuevoUsuario->usuario = (char *)calloc(MAX, sizeof(char));
    printf("\n=====================================");
    printf("\nNombre de usuario: ");
    getchar();
    fgets(nuevoUsuario->usuario, MAX, stdin);
    printf("\nPin: ");
    scanf("%d", &nuevoUsuario->pin);
    return nuevoUsuario;
}

void listarUsuarios(Usuario *u, int total) {
    for (int i = 0; i < total; i++) {
        printf("\n%d)\nUsuario: %s\nPin: %d\n", i+1, u[i].usuario, u[i].pin);
    }
    
}

int validarUsuario(Usuario *u, Usuario ingreso, int total) {
    for (int i = 0; i < total; i++){
        if(strcmp(u[i].usuario, ingreso.usuario) == 0 && u[i].pin == ingreso.pin) return 1;
    }
    return 0;
}   