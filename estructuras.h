#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#define MAX_USERS 10
#define MAX 50

typedef struct {
    char tipo; //Ingreso o gasto
    float cantidad;
    char descripcion[MAX];
} Transaccion;

typedef struct {
    Transaccion transacciones[MAX];
    int tope;
} PilaTransacciones;

typedef struct {
    float montoObjetivo;
    char descripcion[MAX];
} Meta;

typedef struct {
    Meta metas[MAX];
    int frente, final;
} ColaMetas;

typedef struct {
    char *usuario;
    int pin;
    float saldo;
    PilaTransacciones historial;
    ColaMetas metas;
} Usuario;

Usuario *crearUsuario();
void listarUsuarios(Usuario *u, int total);
int validarUsuario(Usuario *u, Usuario ingreso, int total);

void listarTrans();
void agregarTrans();
void listarMetas();
void agregarMeta();

#endif