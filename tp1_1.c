#include <stdio.h>

int main(){
    printf("Hola Mundo!\n");
    int edad = 19;
    int *p;
    p = &edad;
    int tama = sizeof(edad);
    
    printf("Contenido del puntero: %d\n",*p);
    printf("Direccion de memoria almacenada por el puntero: %d\n",p);
    printf("Direccion de la variable: %d\n",&edad);
    printf("Direccion de memoria del puntero: %d\n",&p);
    printf("Tamanio de memoria utilizado: %d bytes\n",tama);

    return 0;
}