#include <stdio.h>
#include <stdlib.h>

int Cuadrado(int num);
void Elevado2(int num);
void Invertir(int a,int b);
void Orden(int a,int b);

int main(){
    int num, a, b;

    printf("Ingrese un numero:\n");
    scanf("%d",&num);
    printf("El valor recibido es: %d y la direccion de memoria: %d\n",num,&num);
    printf("El numero al cuadrado int es: %d\n",Cuadrado(num));
    Elevado2(num);

    printf("\nIngrese dos valores:\n");
    scanf("%d %d",&a,&b);
    Invertir(a, b);
    Orden(a, b);

    return 0;
}

int Cuadrado(int aux){
    return aux * aux;
}

void Elevado2(int aux){
    aux = aux * aux;
    printf("El numero al cuadrado void es: %d\n",aux);
}

void Invertir(int a,int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("a: %d y b: %d\n", a, b);
}

void Orden(int a,int b){
    int c;
    c = (a < b) ? a : b;
    b = (a > b) ? a : b;
    a = c;
    printf("Menor: %d\nMayor: %d\n", a ,b);
}