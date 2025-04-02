#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#define MAX_USERS 10
#define MAX_TEXTO 50

typedef struct {
    char *usuario;
    int pin;
} Usuario;

Usuario *crearUsuario();
void listarUsuarios(Usuario *u, int total);
int validarUsuario(Usuario *u, Usuario ingreso, int total);

#endif